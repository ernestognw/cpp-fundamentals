// cds
// Ernesto García A00820783
// Creado en Tue Sep 11 02:14:28 CDT 2018

#include<iostream>
using namespace std;

int main() {
  // Declarar variables
  char cdSelected;

  // Recibo la selección del disco
  cin >> cdSelected;

  // Desarrollo del programa con switch
   switch (cdSelected) {
   case 'A': cout << "59.90" << endl;
   break;
   case 'B': cout << "129.90" << endl;
   break;
   case 'C': cout << "179.90" << endl;
   break;
   case 'D': cout << "250.50" << endl;
   break;
   default: cout << "CLAVE INCORRECTA" << endl;
   } //Fin de switch

  // Termina el programa
  return 0;
}
