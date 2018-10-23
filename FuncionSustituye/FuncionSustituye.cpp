// FuncionSustituye
// Ernesto García A00820783
// Creado en Tue Oct 16 11:24:07 CDT 2018

#include<iostream>
using namespace std;

void sustituye(int nums[], int length, int n){
  for (int i = 0; i < length; i++){
    if (nums[i] % n == 0) {
      nums[i] = - 1;
    }
  }
  for (int i = 0; i < length; i++){
    cout << nums[i] << endl;
  }
}

int main() {
  // Declarar variables
  int evens = 0;
  int odds = 0;
  int length = 0;
  int n = 0;
  
  cin >> length;

  int nums[length];

  for (int i = 0; i < length; i++) {
    // cout << "Ingresa el número " << i << " ";
    cin >> nums[i];
  }

  cin >> n;

  sustituye(nums, length, n);

  // Termina el programa
  return 0;
}
