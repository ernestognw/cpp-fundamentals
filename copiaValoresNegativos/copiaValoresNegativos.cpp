// copiaValoresNegativos
// Ernesto García A00820783
// Creado en Tue Oct 16 21:52:57 CDT 2018

#include<iostream>
using namespace std;

void sizeOfNegatives(int a[], int lengthA, int &lengthB){
  for (int i = 0; i < lengthA; i++){
    if(a[i] < 0) {
      lengthB++;
    }
  }
}

void copyNegatives(int a[], int b[], int lengthA, int lengthB){
  int j = 0;

  for(int i = 0; i < lengthA && j < lengthB; i++) {
    if(a[i] < 0) {
      b[j] = a[i];
      j++;
    }
  }
}

int main() {
  // Declarar variables
  int lengthA = 0;
  int lengthB = 0;

  // Pedir longitud
  cin >> lengthA;
  int a[lengthA];

  // Pedir valores para el array
  for (int i = 0; i < lengthA; i++) {
    cin >> a[i];
  }

  // Obtengo la longitud del array b
  sizeOfNegatives(a, lengthA, lengthB);

  // Declaro array b
  int b[lengthB];

  // Copiar los negativos de a hacia b
  copyNegatives(a, b, lengthA, lengthB);

  // Imprimo b
  for(int i = 0; i < lengthB; i++) {
    cout << b[i]<< " ";
  }
  
  cout << endl;

  // Termina el programa
  return 0;
}
