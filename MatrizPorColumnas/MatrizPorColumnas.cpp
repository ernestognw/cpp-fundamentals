// MatrizPorColumnas
// Ernesto García A00820783
// Creado en Tue Oct 23 10:55:18 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int rows = 0;
  int cols = 0;

  cin >> rows >> cols;

  int first[rows][cols];
  int second[rows*cols];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> first[i][j];
    }
  }

  int pos = 0;
  for(int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++){
      second[pos] = first[j][i];
      pos++;
    }
  }

  for (int i = 0; i < rows * cols; i++) {
    cout << second[i] << endl;
  }

  // Termina el programa
  return 0;
}
