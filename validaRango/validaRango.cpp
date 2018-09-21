// validaRango
// Ernesto García A00820783
// Creado en Tue Sep 18 08:53:23 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;

  // Desarrollo de tu programa
  do {
    cin >> num;
  }
  while (num < 1 || num > 100);

  cout << "CORRECTO" << endl;

  // Termina el programa
  return 0;
}
