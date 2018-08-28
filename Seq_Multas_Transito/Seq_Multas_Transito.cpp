// Seq_Multas_Transito.cpp
// Ernesto García A00820783
// Creado en Tue Aug 21 10:20:21 CDT 2018

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
    cout << endl << "¿Deseas calcular el monto de otra multa? (0 = No / 1 = Sí) ";
    cin >> answer;
    isValidInput = validateInput();
  } while (!isValidInput);

  return answer;
}

int main() {
  // Declaro mis variables locales
  float salarioMinimo = 0.0;
  int salariosMinimosPorMulta = 0;
  float totalMulta = 0.0;
  bool repeat = 1;
  
  // Ejecuto el mensaje de bienvenida  
  cout << "Hola, este es un calculador de multas de tránsito " << endl;
  
  do {
    // Solicito el valor del salario mínimo al usuario
    do {
      cout << endl << "Ingresa el salario mínimo actual (float): ";
      cin >> salarioMinimo;
      isValidInput = validateInput();      
    } while (!isValidInput);
    
    do {
      cout << "Ingresa el valor de la multa en salarios mínimos (int): ";
      cin >> salariosMinimosPorMulta;
      isValidInput = validateInput();      
    } while (!isValidInput);

    // Proceso el dato que me entrega el usuario
    totalMulta = (salarioMinimo * salariosMinimosPorMulta); 

    // Muestro en pantalla junto a información contextual.
    cout << endl <<"El valor total de tu multa es de: " << totalMulta << " pesos" << endl;
    
    // Pregunto por repetición
    repeat = askForRepeat();
  } while(repeat);

  // Ejecuto el mensaje de despedida
  cout << endl << "Nos vemos :)";

  // Termina el programa
  return 0;
}
