// tipoTriangulo
// Ernesto García A00820783
// Creado en Fri Aug 24 10:47:13 CDT 2018

#include<iostream>
#include <cmath>
using namespace std;

int main() {
  // Declarar variables
  float X = 0;
  float Y = 0;
  float Z = 0;

  // Solicito los datos al usuario
  cin >> X >> Y >> Z;

  // Checo si es triángulo
    // Sólo hace falta verificar que las suman sean mayores, para saber que
    // ningún número es negativo.
  if(X + Y > Z && Y + Z > X && X + Z > Y)
  {
    // Si es triángulo, pregunto si es isósceles
    if (X == Y || Y == Z || Z == X)
    {
      // Si es isósceles, pregunto si es equilátero
      if (X == Y && Y == Z)
        cout << "EQUILATERO";
      else 
        cout << "ISOSCELES";
    }
    // Si no es isósceles, entonces es escaleno
    else
      cout << "ESCALENO";
  } 
  else
  {
    cout << "NO ES TRIANGULO";
  }

  // Termina el programa
  return 0;
}
