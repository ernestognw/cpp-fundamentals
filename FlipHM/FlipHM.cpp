// FlipHM
// Ernesto García A00820783
// Creado en Fri Oct 26 11:20:50 CDT 2018

#include<iostream>
using namespace std;

void flipMatrix(int **matrix, int rows, int cols){
  for (int i = 0; i < rows; i++){
    for(int j = 0; j < (cols / 2); j++){
      swap(matrix[i][j], matrix[i][cols - j - 1]);
    }
  }
}

int main() {
  // Declarar variables
  int rows = 0;
  int cols = 0;
  int **matrix;

  cin >> rows >> cols;

  matrix = new int *[rows];
  for(int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  for(int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      cin >> matrix[i][j];
    }
  }

  flipMatrix(matrix, rows, cols);

  for(int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
