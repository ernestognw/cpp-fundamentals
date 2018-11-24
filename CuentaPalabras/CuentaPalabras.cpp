// CuentaPalabras
// Ernesto García A00820783
// Creado en Tue Nov 13 11:00:45 CST 2018

#include<iostream>
#include<string>
using namespace std;

int main() {
  // Declarar variables
  int counter = 0;
  int pos = 0;
  string word;
  getline(cin, word);

  // Desarrollo de tu programa
  while(pos != -1) {
    pos = word.find(" ", pos + 1);
    counter++;
  }

  cout << counter << endl;

  // Termina el programa
  return 0;
}
