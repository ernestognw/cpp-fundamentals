// formatoHora
// Ernesto García A00820783
// Creado en Tue Aug 28 10:40:12 CDT 2018

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
  // Declarar variables
  int hour = 1;
  int min = 1;

  //Solicito los datos al usuario
  cin >> hour >> min;

  // Desarrollo del programa
  if (hour >= 12 && hour < 24)
  {
    if (hour != 12)
    {
      hour -= 12;
    }
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << " PM";
  }
  else if (hour >= 0 && hour < 12)
  {
    if (hour == 0)
    {
      hour = 12;
    }
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << " AM";
  }

  // Termina el programa
  return 0;
}
