// SumaCasillasParesImpares
// Ernesto García A00820783
// Creado en Tue Oct 16 11:07:57 CDT 2018

#include<iostream>
using namespace std;

void sumaParesImpares(int nums[], int &evens, int &odds, int length) {
  for (int i = 0; i < length; i++){
    if(i % 2  == 0) {
      evens += nums[i];
    } else {
      odds += nums[i];
    }
  }
}

int main() {
  // Declarar variables
  int evens, odds = 0;
  int length = 0;
  
  cin >> length;

  int nums[length];

  for (int i = 0; i < length; i++) {
    // cout << "Ingresa el número " << i << " ";
    cin >> nums[i];
  }

  sumaParesImpares(nums, evens, odds, length);

  cout << evens << " " << odds << endl;

  // Termina el programa
  return 0;
}
