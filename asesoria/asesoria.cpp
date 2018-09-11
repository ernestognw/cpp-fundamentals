// asesoria
// Ernesto García A00820783
// Creado en Tue Sep  4 10:52:20 CDT 2018

#include <iostream>
using namespace std;

void uno(int x, int n)
{
  if (x > 15)
  {
    x = 30;
    n = 5;
  }
  else
  {
    x = 12;
    n = 3;
  }
}

void dos(int v) {
 cout<<v<<" ";
 v = 10;
 cout<<v<<" ";
}

int main()
{
  bool A1, B1, C1, D1, E1, F1;

  // Sección 1
  cout << "Sección 1" << endl << "---"
       << endl;
  A1 = ((-5.0 * 4 < 5) && (11 / 3 == 2));
  B1 = ((5 % 3 - 6 + 5 / 2) != (7 % 4 - 17 / 3));
  C1 = ((-5.0 * 4 != 20) || (17 / 5 >= 2));
  D1 = ((2 != 2.0) && (15 > 8));
  E1 = ((5 % 2 + 6 - 5 / 2) >= (8 % 5 * 2));
  F1 = (!(5 > 8) && (3.0 >= 3));

  cout << "Resultado: " << A1 << B1 << C1 << D1 << E1 << F1 << endl;
  cout << "Esperado: "
       << "0"
       << "0"
       << "1"
       << "0"
       << "0"
       << "1" << endl
       << endl;

  // Sección 2
  cout << "Sección 2" << endl << "---"
       << endl;
  int a = 10;
  int b = 20;
  uno(a, b);
  cout << "2)" << endl;
  cout << "Resultado: " << a << " " << b << endl;
  cout << "Esperado "
       << "10"
       << " "
       << "20" << endl 
       << endl;

  int x = 5;
  cout << "2)" << endl;
  cout << "Resultado: " << x << " ";
  dos(x);
  cout << x << " " << endl;
  cout << "Esperado: " << "5" << " " << "5" << " " << "10" << " " << "5" << " " << endl
  << endl;

  //Sección 5
  cout << "Sección 5" << endl << "---"
  << endl;
  
  cout << "1)" << endl;
  int n = 10, d = 8;
  if ((n > d) || (n / 2 == 5.0))
  n -= d;
  else
  n += d;
  d = d / 3;

  cout << "Resultado: " << n << d << endl;
  cout << "Esperado: " << "2" << "2" << endl
  << endl;

  cout << "2)" << endl;
  int r = 0, k = 28;
  if ((k > 20) && (k % 2 == 0))
  if ( k < 10)
  r += 5;
  else
  r = 22;
  else
  r++;

  cout << "Resultado: " << r << k << endl;
  cout << "Esperado: " << "22" << "28" << endl
  << endl;

  cout << "3)" << endl;
  int c = 0, f = 28;
  if ((c >= 12) || (c <= 3))
  f /= 2;
  c += 7;
  if (f % 2 == 0)
  if (f / 2 != c)
  c++;

  cout << "Resultado: " << c << f << endl;
  cout << "Esperado: " << "7" << "14" << endl
  << endl; 

  cout << "4)" << endl;
  int e = 20, w = 10;
  if ( (e != w * 2 ) && (e / 2 == w) )
  e /= 2;
  else
  if ( !(e + 5 == 25) )
  e -= w * 2;
  else
  e += w / 2;

  cout << "Resultado: " << e << w << endl;
  cout << "Esperado: " << "25" << "10" << endl
  << endl;

  //Sección 5
  cout << "Sección 5" << endl << "---"
  << endl;

  cout << "1)" << endl;
  int z = 2, p = 5, h;
  h = z++ * --p;

  cout << "Resultado: " << z << " " << p << " " << h << endl;
  cout << "Esperado: " << "3" << " " << "4" << " " << "8" << endl
  << endl;

  cout << "2)" << endl;

  int m = 5, o = 4, i = 10, j = 2;
  i += (d++ * m) / --o;

  cout << "Resultado: " << m << " " << o << " " << i << endl;
  cout << "Esperado: " << "5" << " " << "3" << " " << "13" << endl
  << endl;

  return 0;
}
