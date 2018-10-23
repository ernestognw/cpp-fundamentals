// copiaRango
// Ernesto García A00820783
// Creado en Sat Oct 20 20:00:32 CDT 2018

#include<iostream>
using namespace std;

void copiaRango(int arrA[], int sizeA, int limInf, int limSup, int arrB[], int &sizeB) {
  for(int i = 0; i < sizeA; i++) {
    if (arrA[i] >= limInf && arrA[i] <= limSup) {
      arrB[sizeB] = arrA[i];
      sizeB++;
    }
  }
}

int main() {
  // Declarar variables
  int sizeA = 0;
  int sizeB = 0;
  int limInf = 0;
  int limSup = 0;

  cin >> sizeA;

  int arrA[sizeA];
  int arrB[sizeA];

  for (int i = 0; i < sizeA; i++) {
    cin >> arrA[i];
  }

  cin >> limInf >> limSup;

  copiaRango(arrA, sizeA, limInf, limSup, arrB, sizeB);

  for (int i = 0; i < sizeB; i++) {
    cout << arrB[i] << endl;
  }

  // Termina el programa
  return 0;
}
