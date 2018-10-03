// mayorMenor
// Ernesto García A00820783
// Creado en Tue Oct  2 14:32:56 CDT 2018

#include <iostream>
using namespace std;

int main()
{
  int length = 0;
  int higher = 0;
  int lower = 0;

  // Desarrollo de tu programa
  cin >> length;

  int list[length];

  for (int i = 0; i < length; i++)
  {
    cin >> list[i];
    if (list[i] < lower || lower == 0)
    {
      lower = list[i];
    }
    if (list[i] > higher)
    {
      higher = list[i];
    }
  }

  cout << lower << " " << higher << endl;

  // Termina el programa
  return 0;
}
