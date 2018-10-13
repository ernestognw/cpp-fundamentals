// funcComparaFechas
// Ernesto García A00820783
// Creado en Fri Oct 12 10:32:46 CDT 2018

#include<iostream>
#include<vector>
using namespace std;

int indexOfLowest(vector<vector<int> > date, int position) {
  int lowestInThisScope = date[0][position];
  int indexOfLowest = 0;
  int totalDates = date.size();

  int counterOfEquals = 0;

  // Busco el menor y guardo su index
  for (int i = 0; i < totalDates; i++) {
    if (date[i][position] == lowestInThisScope) {
      counterOfEquals++;
    }
    if (date[i][position] < lowestInThisScope){
      lowestInThisScope = date[i][position];
      indexOfLowest = i;
    }
  }

  // Si todos son iguales, retorno -1
  if(counterOfEquals == totalDates){
    indexOfLowest = -1;
  }

  return indexOfLowest;
}

void getLowestDate(vector<vector<int> > date, vector<int> &lowestDate) {
  int index = -1;
  int lengthOfDate = date[0].size();

  // Busco el index de la fecha menor, comparando primero
  // fechas, luego meses, y luego días.
  for (int i = lengthOfDate - 1; i >= 0 && index == -1; i--) {
    index = indexOfLowest(date, i);
  }

  // Igualo mi fecha menor a la fecha con ese index
  lowestDate = date[index];
}

int main() {
  // Declarar variables
  vector<vector<int> > date(3, vector<int>(3,0));
  vector<int> lowestDate(3, 0);

  // Recibo inputs de fechas
  for (int i = 0; i < date.size(); i++) {
    for (int j = 0; j  < date[1].size(); j++) {
      cin >> date[i][j];
    }
  }

  // Obtengo la menor
  getLowestDate(date, lowestDate);


  // Imprimo el resultado
  for (int i = 0; i < lowestDate.size(); i++) {
    cout << lowestDate[i];
    if(i < lowestDate.size() - 1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }

  // Termina el programa
  return 0;
}
