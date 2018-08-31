// EquivalenteSegundos
// Ernesto García A00820783
// Creado en Fri Aug 31 17:09:21 CDT 2018

#include<iostream>
using namespace std;

// Función que convierte horas, minutos y segundos a segundos
int equivSegundos (int hrs, int mins, int segs)
{
  int eqseg = 0;
  eqseg = segs + mins * 60 + hrs * 60 * 60;
  return eqseg;
}

int main() {
  // Declaración variables
  int eqsegs = 0, hrs = 0, mins = 0, segs = 0;

  // Pido los datos al usuario
  cin >> hrs >> mins >> segs;

  // Obtengo el equivalente en segundos llamando a la función
  eqsegs = equivSegundos(hrs, mins, segs);

  // Muestro en pantalla los segundos equivalentes
  cout << eqsegs << endl;

  // Termina el programa
  return 0;
}
