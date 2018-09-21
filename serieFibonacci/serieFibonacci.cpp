// serieFibonacci
// Ernesto García A00820783
// Creado en Tue Sep 18 10:44:23 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int n = 0;
  int previous = 0;
  int fibonacci = 1;

  // Desarrollo de tu programa
  cin >> n;

  while(fibonacci <= n){
    cout << fibonacci << " ";
    int newPrevious = fibonacci;
    fibonacci = previous + fibonacci;
    previous = newPrevious;
  }
  
  cout << endl;
  
  // Termina el programa
  return 0;
}
