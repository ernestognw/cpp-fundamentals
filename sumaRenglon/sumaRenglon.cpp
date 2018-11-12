// sumaRenglon
// Ernesto García A00820783
// Creado en Fri Nov  2 10:14:55 CST 2018

#include<iostream>
using namespace std;

void readMatrix(int **matrix, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }
}

int main() {
  // Inicializar variables y matriz
  int rows = 0;
  int cols = 0;
  int ren = 0;
  int sum = 0;
  int **matrix;

  // cout << "Ingresa renglones: ";
  cin >> rows ;
  // cout << "Ingresa columnas: ";
  cin >> cols;

  matrix = new int *[rows];
  for(int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  // Leer datos de la matriz
  readMatrix(matrix, rows, cols);

  cin >> ren;
  for (int i = 0; i < cols; i++) {
    sum += matrix[ren][i];
  }

  cout << sum << endl;

  // Termina el programa
  return 0;
}
