// Convertidor de millas a kilómetros
// Ernesto García A00820783
// Creación 16/08/2018

#include<iostream>
using namespace std;

// Declaro como constante la equivalencia de kilómetros en una milla
const double KILOMETERS_IN_A_MILE = 1.6;

// Variable global que define si una entrada del usuario es valida
bool isValidInput = 1;

// Función de validación de entradas del usuario
bool validateInput() {
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
    cout << "¿Deseas convertir otra cantidad de millas a kilómetros? (0 = No / 1 = Sí) ";
    cin >> answer;
    isValidInput = validateInput();
  } while (!isValidInput);

  return answer;
}

int main() {
  // Declaro mis variables locales
  float kilometers = 0.0;
  float miles = 0.0;
  bool repeat = 1;
  
  // Ejecuto el mensaje de bienvenida  
  cout << "Hola, este es un convertidor de millas a kilómetros " << endl;
  
  do {
    // Solicito la cantidad de millas al usuario
    do {
      cout << "Ingresa la cantidad de millas que quieres convertir: ";
      cin >> miles;
      isValidInput = validateInput();      
    } while (!isValidInput);
    

    // Proceso el dato que me entrega el usuario
    kilometers = (miles * KILOMETERS_IN_A_MILE); 

    // Muestro en pantalla junto a información contextual.
    cout << endl << miles <<" milla(s) equivale(n) aproximadamente a "<< kilometers << " kilómetro(s)" << endl;
    
    // Pregunto por repetición
    repeat = askForRepeat();
  } while(repeat);

  // Ejecuto el mensaje de despedida
  cout << "Nos vemos :)";

  // Termina el programa
  return 0;
}
