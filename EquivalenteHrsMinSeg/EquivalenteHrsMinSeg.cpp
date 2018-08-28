// EquivalenteHrsMinSeg
// Ernesto García A00820783
// Creado en Tue Aug 21 11:01:04 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  int segs = 0;
  int hr = 0;
  int min = 0;
  int segsSobrantes = 0;

  // Ejecuto mensaje de bienvenida
  // cout << "Hola, este es un convertidor de segundos a horas, minutos y segundos";  

  // Pido al usuario la cantidad de segundos
  // cout << endl << "Ingresa la cantidad en segundos que quieres convertir ";
  cin >> segs;

  // Proceso la cantidad de segundos
  segsSobrantes = segs % 60;
  min = segs / 60;
  hr = min / 60;
  min = min % 60;

  // Regreso el dato final al usuario
  // cout << endl << segs << " equivalen a " << hr << " horas con " << min << " minutos y " << segsSobrantes<< " segundos";
  cout << hr << endl;
  cout << min << endl;
  cout << segsSobrantes << endl;

  // Termina el programa
  return 0;
}
