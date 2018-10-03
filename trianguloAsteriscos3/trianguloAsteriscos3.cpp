// trianguloAsteriscos3
// Ernesto García A00820783
// Creado en Fri Sep 21 11:01:04 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;
  int rows = 0;
  int cols = 0;

  // Desarrollo de tu programa
  cin >> num;

  // Triángulo ascendente
  for (rows = num; rows > 0; rows--){
    for (cols = rows; cols < num; cols++){
      cout << "*";
    }
    cout << endl;
  }

  // Triángulo Descendente
  for (rows = 0; rows < num; rows++){
    for (cols = rows; cols < num; cols++){
      cout << "*";
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
