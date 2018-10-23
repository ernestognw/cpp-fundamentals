// MayorMatriz
// Ernesto García A00820783
// Creado en Sun Oct 21 15:07:02 CDT 2018

#include<iostream>
using namespace std;

void getNumbers(int **mat, int rows, int cols) {
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      cin >> mat[i][j];
    }
  } 
}

void getMax(int **nums, int rows, int cols, int &max, int &rowMax, int &colMax){
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      if(nums[i][j] > max){
        max = nums[i][j];
        rowMax = i;
        colMax = j;
      }
    }
  }
}

int main() { 
  int rows = 0;
  int cols = 0;
  int **nums;
  
  cin >> rows >> cols;

  nums = new int *[rows];

  for(int i = 0; i < rows; i++) {
    nums[i] = new int[cols];
  }

  getNumbers(nums, rows, cols);

  int max = nums[0][0];
  int rowMax = 0;
  int colMax = 0;

  getMax(nums, rows, cols, max, rowMax, colMax);

  cout << max << " " << rowMax << " " << colMax << " " << endl;

  // Termina el programa
  return 0; 
}
