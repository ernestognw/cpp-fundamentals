// MatrizLetra
// Ernesto García A00820783
// Creado en Fri Oct 26 10:31:28 CDT 2018

#include<iostream>
#include<vector>
using namespace std;

void fillLeft(int length, vector <vector<char> > &matrix){
  for(int i = 0; i < length; i++){
    matrix[i][0] = '#';
  }
}

void fillRight(int length, vector <vector<char> > &matrix){
  for(int i = 0; i < length; i++){
    matrix[i][length - 1] = '#';
  }
}

void fillTop(int length, vector <vector<char> > &matrix){
  for(int i = 0; i < length; i++){
    matrix[0][i] = '#';
  }
}

void fillBottom(int length, vector <vector<char> > &matrix){
  for(int i = 0; i < length; i++){
    matrix[length - 1][i] = '#';
  }
}

void fillX(int length, vector <vector<char> > &matrix){
  int pos = 0;
  //Fill diagonal 1
  for(int i = 0; i < length; i++) {
    matrix[i][pos] = '#';
    pos++;
  }
  //Fill diagonal 2
  for(int i = 0; i < length; i++) {
    pos--;
    matrix[i][pos] = '#';
  }
}

void fillMatrix(char letter, int length, vector <vector<char> > &matrix){
  switch(letter) {
    case 'L': 
      fillLeft(length, matrix);
      fillBottom(length, matrix);
    break;
    case 'O': 
      fillLeft(length, matrix);
      fillBottom(length, matrix);
      fillRight(length, matrix);
      fillTop(length, matrix);
    break;
    case 'C': 
      fillLeft(length, matrix);
      fillBottom(length, matrix);
      fillTop(length, matrix);
    break;
    case 'X': 
      fillX(length, matrix);
    break;
    default: return;
  }
}

int main() {
  // Declarar variables
  int length = 0;
  char letter = 'L';
  
  // cout << "Teclea la longitud de la matrix: ";
  cin >> length;
  // cout << "Teclea letra a representar: ";
  cin >> letter;

  vector <vector<char> > matrix(length, vector<char>(length, '.'));

  fillMatrix(letter, length, matrix);

  for(int i = 0; i < length; i++){
    for (int j = 0; j < length; j++){
      cout << matrix[i][j];
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}