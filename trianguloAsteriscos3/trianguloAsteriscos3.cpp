// trianguloAsteriscos3
// Ernesto García A00820783
// Creado en Fri Sep 21 11:01:04 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;

  // Desarrollo de tu programa
  cin >> num;

  // Triángulo ascendente
  for (int k = num; k > 0; k--){
    for (int l = k; l < num; l++){
      cout << "*";
    }
    cout << endl;
  }

  // Triángulo Descendente
  for (int i = 0; i < num; i++){
    for (int j = i; j < num; j++){
      cout << "*";
    }
    cout << endl;
  }

  // Termina el programa
  return 0;
}
