// multiplesBefore
// Ernesto García A00820783
// Creado en Fri Oct  5 16:51:24 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;
  int sum = 0;

  cin >> num;

  for(int i = num - 1; i > 0; i--){
    if(i % 3 == 0){
      sum += i;
      cout << sum << endl;
    } else if (i % 5 == 0) {
      sum += i;
      cout << sum << endl;
    }
  }

  cout << sum << endl;

  // Termina el programa
  return 0;
}
