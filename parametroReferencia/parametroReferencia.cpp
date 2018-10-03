// parametroReferencia
// Ernesto García A00820783
// Creado en Sun Sep 30 20:23:27 CDT 2018

#include <iostream>
using namespace std;

// Desarrollo de tu programa
void demo(int &valor)
{
  valor = 5;
  cout << valor << endl;
}

int main()
{
  int n = 10;
  cout << n << endl;
  demo(n);
  cout << n << endl;

  return 0;
}
