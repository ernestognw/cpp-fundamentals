// Estaciones
// Ernesto García A00820783
// Creado en Fri Aug 24 11:04:54 CDT 2018

#include <iostream>
using namespace std;

bool isInRange(int initialDay, int finalDay, int initialMonth, int finalMonth, int day, int month)
{
  // Verifico que está dentro de los meses del rango
  if (month >= initialMonth && month <= finalMonth)
  {
    // Si el mes es el inicial, entonces verifico que esté en el rango de días
    if (month == initialMonth)
    {
      // Si el día es anterior al día de inicio, no está en rango
      if (day < initialDay)
        return false;
      else
        return true;
    }
    // Si el mes es el final, entonces verifico que esté en el rango de días
    else if (month == finalMonth)
    {
      // Si el día es posterior al día final, no está en rango
      if (day > finalDay)
        return false;
      else
        return true;
    }
    else
      // Si pasa las pruebas, está en rango
      return true;
  }
  // Si el mes es menor que el mes de inicio o mayor que el mes final, entonces no está en rango
  else
    return false;
}

int main()
{
  // Declarar variables
  int day = 1;
  int month = 1;

  // Solicito los datos al usuario
  cin >> day >> month;

  // Clasifico los datos
  // Verifico que sea primavera
  if (isInRange(21, 21, 3, 6, day, month))
    cout << "PRIMAVERA" << endl;
  // Si no, verifico que sea verano
  else if (isInRange(22, 22, 6, 9, day, month))
    cout << "VERANO" << endl;
  // Si no, verifico que sea otoño
  else if (isInRange(23, 21, 9, 12, day, month))
    cout << "OTOÑO" << endl;
  // Si no es ninguno, es invierno
  else
    cout << "INVIERNO" << endl;

  // Termina el programa
  return 0;
}
