// ordena3enteros
// Ernesto García A00820783
// Creado en Tue Oct  2 11:20:34 CDT 2018

#include <iostream>
using namespace std;

void changePos(int &n, int &m)
{
  int aux = 0;
  aux = n;
  n = m;
  m = aux;
}

void sorting(int &x, int &y, int &z)
{
  while ((x < y && y < z) == false)
  {
    if (x > y)
    {
      changePos(x, y);
    }
    if (y > z)
    {
      changePos(y, z);
    }
  }
}

int main()
{
  // Declarar variables
  int a, b, c = 0;

  // Desarrollo de tu programa
  cin >> a >> b >> c;

  sorting(a, b, c);

  cout << a << b << c << endl;

  // Termina el programa
  return 0;
}
