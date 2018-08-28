// parImparPosNeg
// Ernesto García A00820783
// Creado en Tue Aug 28 10:41:09 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 1;

  // Solicito los datos al usuario
  cin >> num;

  // Desarrollo del programa
  if(num % 2 == 0)
  {
    cout << "PAR ";
    if(num >= 0)
      cout << "POSITIVO";
    else
      cout << "NEGATIVO";
  }
  else {
    cout << "IMPAR ";
    if(num >= 0)
      cout << "POSITIVO";
    else
      cout << "NEGATIVO";
  }
  // Termina el programa
  return 0;
}
