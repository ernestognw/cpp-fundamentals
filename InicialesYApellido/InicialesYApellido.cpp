// InicialesYApellido
// Ernesto García A00820783
// Creado en Tue Nov 13 10:41:28 CST 2018

#include<iostream>
#include<string>
using namespace std;

int main() {
  // Declarar variables
  string nombre;
  int space1, space2;
  getline(cin, nombre);

  // Desarrollo de tu programa
  space1 = nombre.find(" ");
  nombre.erase(1, space1);
  nombre.insert(1, ". ");
  space2 = nombre.find(" ", space1);
  nombre.erase(space2 + 2);
  nombre.insert(space2 + 2, ". ");

  cout << nombre << endl;

  // Termina el programa
  return 0;
}
