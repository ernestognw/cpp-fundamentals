// divisoresLista
// Ernesto García A00820783
// Creado en Tue Oct  2 17:16:50 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int lower, higher = 0;

  cin >> lower >> higher;

  for (int i = lower; i <= higher; i++){
    cout << "VALOR " << i << endl;
    cout << "DIVISORES";
    for (int j = 1; j < i; j++){
      if (i % j == 0) {
        cout << " " << j;
      }
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
