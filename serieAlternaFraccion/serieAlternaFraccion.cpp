// serieAlternaFraccion
// Ernesto García A00820783
// Creado en Tue Oct  2 17:09:52 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int length = 0;

  // Desarrollo del programa
  cin >> length;

  for (int i = 1; i <= length; i++) {
    if(i % 2 != 0){
      cout << i;
    } else {
      cout << "1/" << i;
    }

    if(i != length){
      cout << " + ";
    } else {
      cout << endl;
    }
  }


  // Termina el programa
  return 0;
}
