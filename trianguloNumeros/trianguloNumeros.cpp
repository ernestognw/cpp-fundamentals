// trianguloNumeros
// Ernesto García A00820783
// Creado en Fri Sep 21 01:43:57 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;

  // Desarrollo de tu programa
  cin >> num;

  for (int rows = num; rows > 0; rows--){
    for (int index = 1; index <= rows; index++){
      cout << index;
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
