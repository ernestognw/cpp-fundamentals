// sumaMil
// Ernesto García A00820783
// Creado en Tue Oct  2 17:38:24 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int result = 0;
  int counter = 0;
  int aux = 0;

  // Desarrollo de tu programa
  do {
    cin >> aux;
    result += aux;
    counter++;
  } while (result < 1000);

  cout << result << " " << counter << endl;

  // Termina el programa
  return 0;
}
