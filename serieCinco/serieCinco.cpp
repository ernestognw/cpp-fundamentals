// serieCinco
// Ernesto García A00820783
// Creado en Tue Sep 18 08:44:43 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int a = 0, b = 0;

  // Desarrollo de tu programa
  cin >> a >> b;

  while (a <= b) {
    cout << a << " ";
    a += 5;
  }

  cout << endl;

  // Termina el programa
  return 0;
}
