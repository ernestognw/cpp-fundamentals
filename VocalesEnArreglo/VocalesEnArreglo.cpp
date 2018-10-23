// VocalesEnArreglo
// Ernesto García A00820783
// Creado en Sat Oct 20 19:39:23 CDT 2018

#include<iostream>
using namespace std;

int vowelsCounter(char arr[], int length) {
  int counter = 0;

  for(int i = 0; i < length; i++) {
    switch(arr[i]){
      case 'a': counter++;
      break;
      case 'e': counter++;
      break;
      case 'i': counter++;
      break;
      case 'o': counter++;
      break;
      case 'u': counter++;
      break;
    }
  }
  
  return counter;
}

int main() {
  // Declarar variables
  int length = 0;
  int vowelsIn = 0;

  cin >> length;

  char arr[length];

  for(int i = 0; i < length; i++) {
    cin >> arr[i];
  }

  vowelsIn = vowelsCounter(arr, length);

  cout << vowelsIn << endl;

  // Desarrollo de tu programa

  // Termina el programa
  return 0;
}
