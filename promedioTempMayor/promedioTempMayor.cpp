// promedioTempMayor
// Ernesto García A00820783
// Creado en Fri Nov  2 11:07:36 CST 2018

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
  int high = 0;
  int indexHigh = 0;
  int **matrix;

  // cout << "Ingresa renglones: ";
  cin >> rows ;
  // cout << "Ingresa columnas: ";
  cin >> cols;
  // cols = rows;

  matrix = new int *[rows];
  for(int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  // Leer datos de la matriz
  readMatrix(matrix, rows, cols);

  for (int i = 0; i < rows; i++){
    int avg = 0;
    for (int j = 0; j < cols; j++){
      avg += matrix[i][j];
    }
    avg /= rows;
    if (avg > high || i == 0) {
      high = avg;
      indexHigh = i;
    }
  }

  //Imprimir resultado
  cout << indexHigh << endl;

  // Termina el programa
  return 0;
}
