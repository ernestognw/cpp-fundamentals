// InsertaCaracter
// Ernesto García A00820783
// Creado en Tue Nov 13 10:54:27 CST 2018

#include<iostream>
#include<string>
using namespace std;

int main() {
  // Declarar variables
  string word;
  int length;
  getline(cin,word);

  length = word.length() * 2 - 1;

  // Desarrollo de tu programa
  for(int i = 1; i < length; i+=2){
    word.insert(i, "%");
  }

  cout << word << endl;

  // Termina el programa
  return 0;
}
