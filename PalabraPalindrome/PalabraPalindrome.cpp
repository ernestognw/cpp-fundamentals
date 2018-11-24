// PalabraPalindrome
// Ernesto García A00820783
// Creado en Tue Nov 13 10:32:33 CST 2018

#include<iostream>
#include<string>
using namespace std;

void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main() {
  // Declarar variables
  string word, reversed;
  getline(cin, word);
  reversed = word;

  // Desarrollo de tu programa
  reverseStr(reversed);

  reversed == word ? cout << "Si es palindrome" : cout << "No es palindrome";
  cout << endl;

  // Termina el programa
  return 0;
}
