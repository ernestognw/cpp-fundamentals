// matrizIdentidad
// Ernesto García A00820783
// Creado en Fri Oct 26 11:09:37 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int n = 0;
  int pos = 0;

  cin >> n;

  int matrix[n][n];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      matrix[i][j] = 0;
    }
  }

  for(int i = 0; i < n; i++) {
      matrix[i][pos] = 1;
      pos++;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      cout << matrix[i][j];
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
