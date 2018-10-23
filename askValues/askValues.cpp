// askValues
// Ernesto García A00820783
// Creado en Tue Oct 16 10:22:55 CDT 2018

#include<iostream>
using namespace std;

int average(double arr[], int length) {
  int avg = 0;

  for (int i = 0; i < length; i++) {
    avg += arr[i];
  }

  return avg / length;
}

int main() {
  // Declarar variables
  int n = 0;

  cin >> n;

  double m[n];

  for(int i = 0; i < n; i++){
    cout << "Teclea el dato " << i << " ";
    cin >> m[i];
  }

  for(int i = 0; i < n; i++){
    cout << m[i] << " ";
  }

  cout << endl;

  cout << "El promedio de los números es " << average(m, n) << endl;

  // Termina el programa
  return 0;
}
