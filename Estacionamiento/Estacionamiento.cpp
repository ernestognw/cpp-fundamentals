// Estacionamiento
// Ernesto García A00820783
// Creado en Fri Aug 31 17:21:46 CDT 2018

#include<iostream>
using namespace std;

int totalAPagar(int hrs, int mins)
{
  // Defino la cuota mínima, y un contador de adicionales
  const int cuotaMin = 20;
  int contAdicional = 0;
  
  // Si las horas son menos de 19, haz el cálculo
  if (hrs < 19) {
    // Si las horas son mayores a 3, añade al contador de adicionales las horas que se pasó
    if (hrs >= 3){
      contAdicional += hrs - 3;
      
      // Si ha pasado almenos un minuto de la hora, añade uno al contador de adicionales
      if (mins > 0) 
        contAdicional += 1;
    }
    
    return cuotaMin + contAdicional * 5;
  } 
  // Si son más de 19 horas, el precio es automáticamente 100
  else
    return 100;
}

int main() 
{
  // Declarar variables
  int total = 0, hrs = 0, mins = 0;

  // Pido los datos al usuario
  cin >> hrs >> mins;

  // Desarrollo del programa
  total = totalAPagar(hrs, mins);

  cout << total << endl;

  // Termina el programa
  return 0;
}