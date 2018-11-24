// eliminaPrimUltPal
// Ernesto García A00820783
// Creado en Tue Nov 13 11:06:23 CST 2018

#include<iostream>
#include<string>
using namespace std;

int main() {
  // Declarar variables
  string word;
  int firstSpace, lastSpace;
  getline(cin, word);

  // Desarrollo de tu programa
  firstSpace = word.find(" ");
  word.erase(0, firstSpace + 1);
  for (int i = 0; i < word.length(); i++){
    if(word[i] == ' '){
      lastSpace = i;
    }
  }

 word.erase(lastSpace, word.length()-1);

 cout << word << endl;

  // Termina el programa
  return 0;
}
