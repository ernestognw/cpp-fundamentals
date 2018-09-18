// serieAlternaDenom
// Ernesto García A00820783
// Creado en Tue Sep 18 11:13:02 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int cantTerminos = 0;
  int num = 1;
  int den = 1;

  // Desarrollo de tu programa
  cin >> cantTerminos >> num >> den;
    
  for(int i = 1; i <= cantTerminos; i++){
    cout << num << "/" << den;
    num++;
    if (den % 2 == 0){
      den += 3;
    } else {
      den++;
    }
    if(i != cantTerminos){
      cout << "+";
    } else {
      cout << endl;
    }
  }

  // Termina el programa
  return 0;
}
