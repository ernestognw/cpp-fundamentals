// dosContadoresV2
// Ernesto García A00820783
// Creado en Tue Oct  2 17:25:23 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int a, b = 0;

  // Desarrollo de tu programa
  cin >> a >> b;

  for (int i = b; i > 0; i--) {
    cout << a << " " << i << endl;
    a += 2;
  }

  // Termina el programa
  return 0;
}
