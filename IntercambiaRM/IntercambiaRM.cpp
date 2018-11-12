// IntercambiaRM
// Ernesto García A00820783
// Creado en Fri Oct 26 14:53:50 CDT 2018

#include<iostream>
using namespace std;

void swapRows(int **matrix, int A, int B) {
  int *auxRow;
  
  auxRow = matrix[A];
  matrix[A] = matrix[B];
  matrix[B] = auxRow;
}

void printMatrix(int **matrix, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

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
  int A = 0;
  int B = 0;
  int **matrix;

  // cout << "Ingresa renglones: ";
  cin >> rows;
  // cout << "Ingresa columnas: ";
  cin >> cols;  
  
  // cout << "Ingresa las primera columas que quieres cambiar: ";
  cin >> A >> B;

  matrix = new int *[rows];

  for(int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  // Leer datos de la matriz
  readMatrix(matrix, rows, cols);

  // Desarrollo del programa
  swapRows(matrix, A, B);

  //Imprimir matriz
  printMatrix(matrix, rows, cols);

  // Termina el programa
  return 0;
}
