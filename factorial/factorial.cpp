// factorial
// Ernesto García A00820783
// Creado en Tue Oct  2 17:29:47 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num, result = 1;

  // Desarrollo de tu programa
  cin >> num;

  for (int i = 0; i < num; i++) {
    result *= (num - i);
  }

  cout << result << endl;

  // Termina el programa
  return 0;
}
