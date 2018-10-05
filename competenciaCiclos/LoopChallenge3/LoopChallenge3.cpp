// LoopChallenge3
// Ernesto García A00820783
// Creado en Fri Oct  5 11:16:33 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int n = 0;
  
  cin >> n;

  for (int row = 1; row <= n; row++) {
    // This for loop writes a descendant point triangle
    for (int points = 0; points < n - row; points++) {
      cout << '.';
    }

    // This for loop complements the firs descendant point triangle
    // by adding a counter for every empty espace
    for (int ascendant = 1; ascendant <= row; ascendant++) {
      cout << ascendant;
    }


    // This for loop creates a ascendant triangle of
    // numbers
    for (int descendant = row; descendant > 1; descendant--) {
      cout << descendant - 1;
    }

    // This for loop fills the rectangle
    for (int points = 0; points < n - row; points++) {
      cout << '.';
    }
    cout << endl;
  }

 
  // Termina el programa
  return 0;
}
