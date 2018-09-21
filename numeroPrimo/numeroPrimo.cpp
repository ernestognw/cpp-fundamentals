// numeroPrimo
// Ernesto García A00820783
// Creado en Tue Sep 18 10:57:13 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int num = 0;
  bool primo = true;
  int counter = 0;

  // Desarrollo de tu programa
  cin >> num;

  counter = num;

  while (primo && counter > 2) {
    counter--;
    if (num % counter == 0){
      primo = false;
    }
  }

  if (primo) {
  cout << "PRIMO" << endl;
  } else {
  cout << "NO PRIMO" << endl;
  }

  // Termina el programa
  return 0;
}
