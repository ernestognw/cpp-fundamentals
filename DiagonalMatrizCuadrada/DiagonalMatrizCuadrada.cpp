// DiagonalMatrizCuadrada
// Ernesto García A00820783
// Creado en Tue Oct 23 11:09:38 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int rows = 0;

  cin >> rows;

  int mat[rows][rows];

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < rows; j++){
      cin >> mat[i][j];
    }
  }

  int col = 0;
  for(int i = 0; i < rows; i++) {
    cout << mat[i][col] << endl;
    col++;
  }

  // Termina el programa
  return 0;
}
