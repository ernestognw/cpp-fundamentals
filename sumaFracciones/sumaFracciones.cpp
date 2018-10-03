// sumaFracciones
// Ernesto García A00820783
// Creado en Tue Oct  2 11:06:56 CDT 2018

#include <iostream>
using namespace std;

void sumaFracc(int num1, int num2, int denom1, int denom2, int &numres, int &denomres)
{
  numres = num1 * denom2 + num2 * denom1;
  denomres = denom1 * denom2;
}

int main()
{
  // Declarar variables
  int num1, denom1, num2, denom2, num3, denom3, numres, denomres = 0;

  // Desarrollo del programa
  cin >> num1 >> denom1 >> num2 >> denom2 >> num3 >> denom3;

  sumaFracc(num1, num2, denom1, denom2, numres, denomres);
  sumaFracc(numres, num3, denomres, denom3, numres, denomres);

  cout << numres << " " << denomres << endl;
  
  // Termina el programa
  return 0;
}
