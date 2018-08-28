// raicesCuad
// Ernesto García A00820783
// Creado en Fri Aug 24 04:07:42 CDT 2018

#include<iostream>
#include <cmath>
using namespace std;

int main() {
  // Declarar variables
  float a = 0.0;
  float b = 0.0;
  float c = 0.0;
  float discriminant = 0.0;

  // Solicito los coeficientes de la ecuación
  cin >> a >> b >> c;

  // Proceso los datos
  discriminant = pow(b,2) - 4 * a * c;

  if (discriminant > 0)
    {
    cout << "DOS SOLUCIONES REALES" << endl;
    cout << (-b+sqrt(discriminant))/(2*a) << endl;
    cout << (-b-sqrt(discriminant))/(2*a) << endl;
    }
  else 
    {
      if (discriminant < 0) 
      {
        cout << "DOS SOLUCIONES IMAGINARIAS" << endl;
        cout << -b/(2*a);
      }
      else
      {
        cout << "UNA SOLUCIÓN REAL" << endl;
        cout << (-b+sqrt(discriminant))/(2*a) << endl;
      }
    }

  // Termina el programa
  return 0;
}
