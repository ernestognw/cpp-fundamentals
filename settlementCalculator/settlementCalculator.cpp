// Calculador de Finiquito
// Ernesto García A00820783
// Creación 16/08/2018
#include<iostream>
using namespace std;

// Variable global que define si una entrada del usuario es valida
bool isValidInput = 1;

// Función de validación de entradas del usuario
bool validateInput(){
    // En caso de fallo, muestra error y limpia la entrada
    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << endl << "Instrucción incorrecta" << endl;  
      return false;
    } 
    // En caso de no existir fallo, retorna validación
    else {
      return true;
    }  
}

// Función para preguntar si se va a repetir el programa
bool askForRepeat() {
  // Variable auxiliar para determinar respuesta
  bool answer = 0;

  // Pregunta al usuario si quiere repetición
  do {
    cout << "¿Deseas calcular otro finiquito? (0 = No / 1 = Sí) ";
    cin >> answer;
    isValidInput = validateInput();
  } while (!isValidInput);

  return answer;
}

int main() {
  // Declaro mis variables locales
  int salary = 0;
  int yearsWorking = 0;
  int settlementBase = 0;
  float settlementByYears = 0;
  float settlement = 0;
  bool repeat = 1;
  
  // Ejecuto el mensaje de bienvenida  
  cout << "Hola, este es una calculadora de finiquitos " << endl;
  
  do {
    // Solicito el salario del empleado
    do {
      cout << "Ingresa el salario mensual del empleado a finiquitar en pesos: (entero) ";
      cin >> salary;
      isValidInput = validateInput();      
    } while (!isValidInput);

    // Solicito la antiguedad en años del empleado
    do {
      cout << "¿Cuántos años trabajó el empleado a finiquitar?: (entero) ";
      cin >> yearsWorking;
      isValidInput = validateInput();      
    } while (!isValidInput);
    

    // Calculo el finiquito
    settlementBase = 3 * salary;
    settlementByYears = ((20 * salary) / 30)* yearsWorking; // Se asume el mes como de 30 días
    settlement = settlementBase + settlementByYears;

    // Muestra el calculo en pantalla junto a información contextual.
    cout << endl << "El finiquito total de este empleado será de " << settlement << " pesos" << endl;
    cout << "Dicho finiquito se compone de " << settlementBase << " pesos por 3 meses de trabajo base y " << endl; 
    cout << settlementByYears << " de 20 días de salario por cada año trabajado" << endl;
    
    // Pregunto por repetición
    repeat = askForRepeat();
  } while(repeat);

  // Ejecuto el mensaje de despedida
  cout << "Nos vemos :)";

  // Termina el programa
  return 0;
}
