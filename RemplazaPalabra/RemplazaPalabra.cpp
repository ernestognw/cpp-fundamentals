// RemplazaPalabra
// Ernesto García A00820783
// Creado en Tue Nov 13 10:36:43 CST 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int pos = 0;
  string frase, word1, word2;
  getline(cin, frase);
  getline(cin, word1);
  getline(cin, word2);

  // Desarrollo de tu programa
  while(pos != -1){
    pos = frase.find(word1, pos);
    if(pos != -1){
      frase.erase(pos, word1.length());
      frase.insert(pos, word2);
    }
  }

  cout << frase << endl;

  // Termina el programa
  return 0;
}
