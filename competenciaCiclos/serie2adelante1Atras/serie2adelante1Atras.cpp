// serie2adelante1Atras
// Ernesto García A00820783
// Creado en Fri Oct  5 10:32:24 CDT 2018

#include<iostream>
using namespace std;

int main() {
  int valorInicial, cantNumeros = 0;

  cin >> valorInicial >> cantNumeros;

  for (int i = 0; i < cantNumeros; i++) {
    cout << valorInicial << " ";

    i % 2 == 0 ?
      valorInicial += 2 :
      valorInicial--;

  }
  
  cout << endl;

  return 0;
}
