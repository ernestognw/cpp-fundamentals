// alternaCaracteres
// Ernesto García A00820783
// Creado en Tue Oct  2 17:02:22 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int length = 0;
  int pivot = 0;

  // Desarrollo de tu programa
  cin >> length;

  for (int i = 0; i < length; i++) {
    switch(pivot){
      case 0: 
        cout << '*';
      break;
      case 1: 
        cout << '#';
      break;
      case 2: 
        cout << '%';
      break;
    }
    if (pivot >= 2) {
      pivot = 0;
    } else {
      pivot++;
    }
  }

  cout << endl;

  // Termina el programa
  return 0;
}
