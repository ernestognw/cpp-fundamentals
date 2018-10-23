// FuncionInvierte
// Ernesto García A00820783
// Creado en Tue Oct 16 21:41:55 CDT 2018

#include<iostream>
using namespace std;

void reverse(int a[], int b[], int length){
  for(int i = 0; i < length; i++) {
    b[i] = a[length - 1 - i];
  }
}

int main() {
  // Declarar variables
  int length = 0;

  cin >> length;

  int a[length];
  int b[length];

  for (int i = 0; i < length; i++) {
    cin >> a[i];
  }

  reverse(a, b, length);

  for(int i = 0; i < length; i++) {
    cout << b[i] << " ";
  }

  cout << endl;
  
  // Termina el programa
  return 0;
}
