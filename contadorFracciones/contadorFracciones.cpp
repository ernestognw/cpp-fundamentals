// contadorFracciones
// Ernesto García A00820783
// Creado en Tue Sep 18 09:03:40 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int n = 0;

  // Desarrollo de tu programa
  cin >> n;

  for(int i = 1; i <= n; i++){
    cout << "1/" << i;
    if (i != n) {
      cout << " + ";
    }
  }

  // Termina el programa
  return 0;
}
