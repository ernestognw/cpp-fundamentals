// llenaArrgloMultiplos
// Ernesto García A00820783
// Creado en Fri Nov  2 10:37:17 CST 2018

#include <iostream>

using namespace std;

int main()
{
  int n, p, temp;

  cin >> n >> p;

  int arr[n];

  for (int i = 0, j = 0; j < n; i++)
  {
    cin >> temp;
    if (temp % p == 0)
    {
      arr[j] = temp;
      j++;
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;
}
