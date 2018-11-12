// loteria
// Ernesto García A00820783
// Marco Brown
// Creado en Fri Nov  9 14:02:20 CST 2018

#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
using namespace std;

// Función de asignación de tablero
void assignBoard(vector<vector<int> > &board, int rows, int cols){
  map<int, bool> assigned; // El mapa ubica números ya asignados para no repetir

  srand((int)time(0)); //Se planta la función time() como semilla de rand
  for (int currentRow = 0; currentRow < rows; currentRow++){
    vector<int> row;
    board.push_back(row); // Se añade un renglón a la matriz

    while(board[currentRow].size() < cols){ // Se rellenan los espacios de cada renglón
      int toInsert = rand() % 53 + 1; // Genera número aleatorio de 1 a 54

      if(!assigned[toInsert]){ // Comprueba si el número ya fue asignado
        board[currentRow].push_back(toInsert); // Si no se ha asignado, se añade al renglón
        assigned[toInsert] = true;
      }
    }
  }
}

// Función para obtener un número dentro de un rango
void getInRange(int &toGet, int limInf, int limSup){
  do {
    cin >> toGet; // Lee el número
    toGet < limInf || toGet > limSup ?  // Verifica que esté en el rango
      cout << "Opción no valida. Ingresa un nuevo valor: " : 
      cout << endl;
  } while(toGet < limInf || toGet > limSup);
}

// Función de juego con loteria vertical
bool vertical(vector<vector<char> > marks){
  for(int col = 0; col < marks.size(); col++){ // Analiza cada renglón
    bool passed = true;
    for(int row = 0; row < marks[col].size() && passed; row++)
      marks[row][col] != 'X' && (passed = false); // Si algún renglón no está marcado, ese renglón se descarta
    if(passed)
      return passed; // Si el renglón no se descarta, quiere decir que está lleno, y el usuario ha ganado
  }
  return false; // Si llega hasta aquí es que ningún renglón pasó la prueba
}

// Función de juego con loteria horizontal
bool horizontal(vector<vector<char> > marks){
  for(int row = 0; row < marks.size(); row++){ // Analiza cada columna
    bool passed = true;
    for(int col = 0; col < marks[row].size() && passed; col++)
      marks[row][col] != 'X' && (passed = false); // Si alguna columna no está marcado, esa columna se descarta
    if(passed)
      return passed; // Si la columna no se descarta, quiere decir que está llena, y el usuario ha ganado
  }
  return false; // Si llega hasta aquí es que ninguna columna pasó la prueba
}

// Función de juego con loteria diagonal
bool diagonal(vector<vector<char> > marks){
  int push = 0; // Variable para indicar columna
  bool passed = true;

  for(int row = 0; row < marks.size(); row++){
    marks[row][push] != 'X' && (passed = false); // Si alguna posición de la diagonal no está marcada, esa diagonal no pasa
    push++;
  }
  
  if(passed)
    return passed; // Si la primera diagonal pasó, entonces el jugador ganó
  
  passed = true; // Si la anterior diagonal no pasó, se prueba la siguiente diagonal

  for(int row = 0; row < marks.size(); row++){
    push--;
    marks[row][push] != 'X' && (passed = false);
  }

  return passed; // Se retorna el valor de si pasó o no pasó la siguiente diagonal
}

// Función de juego con loteria de 4 esquinas
bool fourCorners(vector<vector<char> > marks){
  int lim = marks.size() - 1; // El límite es el último renglón y/o columna del tablero
  if(marks[0][0] != 'X' || 
     marks[0][lim] != 'X' || 
     marks[lim][0] != 'X' || 
     marks[lim][lim] != 'X'){
    return false; // Si cualquiera de las 4 esquinas no está marcada, el jugador no ha ganado 
  }
  return true; // Si todas las esquinas están marcadas, el jugador ganó
}

// Función de juego con loteria por pocito
bool pocito(vector<vector<char> > marks){
  for(int row = 1; row < marks.size() - 1; row++){ // Analiza los renglones de 1 cuadro adentro
    for(int col = 1; col < marks[row].size() - 1; col++){ // Analiza las columnas de 1 cuadro adentro
      if(marks[row][col] != 'X')
        return false; // Si algún bloque no está marcado, es que el pocito no está lleno
    }
  }
  return true; // Si termina la prueba, entonces el pocito está completo
}

// Función de juego con loteria por cuadro exterior
bool exteriorSquare(vector<vector<char> > marks){
  bool passed = true;
  for(int row = 0; row < marks.size() && passed; row++) // Recorre las columnas exteriores
    !(marks[row][0] == 'X' && marks[row][marks.size() - 1] == 'X') && (passed = false); // Si algún valor no está marcado, no pasa la prueba
  for(int col = 1; col < marks.size() - 1 && passed; col++) // Recorre los renglones exteriores
    !(marks[0][col] == 'X' && marks[marks.size() - 1][col] == 'X') && (passed = false); // Si algún valor no está marcado, no pasa la prueba
  return passed; // Retorna si pasó o no pasó la prueba
}

// Función para checar la regla seleccionada, y si el usuario ya ganó
bool win(vector<vector<char> > marks, int caseToWin){
  switch(caseToWin){
    case 1: return vertical(marks); break;
    case 2: return horizontal(marks); break;
    case 3: return diagonal(marks); break;
    case 4: return fourCorners(marks); break;
    case 5: return pocito(marks); break;
    case 6: return exteriorSquare(marks); break;
    default: return false;
  }
}

// Función para marcar el número dicho
void markSaid(vector<vector<int> > board, vector<vector<char> > &marks, int toMark){
  for(int row = 0; row < board.size(); row++){
    for(int col = 0; col < board[row].size(); col++)
      board[row][col] == toMark && (marks[row][col] = 'X');
  }
}

// Función para imprimir tablero
void printBoard(vector<vector<int> > board, vector<vector<char> > marks) {
  cout << "================ TU TABLA ES ================" << endl;
  for (int row = 0; row < board.size(); row++) {
    cout << "------------- ";
    for(int col = 0; col < board[row].size(); col++)
      cout << "[" << setfill('0') << setw(2) << board[row][col] << "]";
    cout << " --------------" << endl;

    cout << "------------- ";
    for(int col = 0; col < board[row].size(); col++)
      cout << "[" << setfill(marks[row][col]) << setw(2) << marks[row][col] << "]";
    cout << " --------------" << endl;
  }
  cout << endl;
}

int main() {
  // Declaración de variables del juego
  const int rows = 4;
  const int cols = 4;
  int caseToWin = 0;                                               // Opción de juego
  vector <vector<int> > board;                                     // Tablero
  vector <vector<char> > marks (rows, vector<char> (cols, ' '));   // Marcas para los números que ya salieron
  map <int, bool> numbersSaid;                                     // Mapa de números dichos
  
  // Desarrollo del juego
  assignBoard(board, rows, cols); // Asigna un tablero

  cout << "======== BIENVENIDO A LA LOTERÍA TEC ========" << endl << endl;
  cout << "------ Selecciona la opción para ganar ------" << endl; // Despliegue del menú
  cout << "1) Vertical" << endl;
  cout << "2) Horizontal" << endl;
  cout << "3) Diagonal" << endl;
  cout << "4) Cuatro Esquinas" << endl;
  cout << "5) Pocito" << endl;
  cout << "6) Cuadro Exterior" << endl << endl;

  getInRange(caseToWin, 1, 6); // Obtener opción de juego
  printBoard(board, marks);

  while(!win(marks, caseToWin)){
    int number = 0;
    cout << "Teclea la carta que gritaron: ";
    getInRange(number, 1, 54); // Se obtiene el número gritado

    if (numbersSaid[number]){ // Se valida que el número gritado no se haya gritado antes
      cout << "Este número ya fué mencionado. " << endl;
    } else { // Si no se ha gritado, entonces se marca como gritado y se imprime el nuevo tablero
      numbersSaid[number] = true;
      markSaid(board, marks, number);
      printBoard(board, marks);
    }
  }

  cout << "========== ¡LOTERIA! HAS GANADO :) ==========" << endl;
  cout << "=============== ¡FELICIDADES! ===============" << endl;

  // Termina el programa
  return 0;
}
