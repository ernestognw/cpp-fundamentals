// funcionSuma1Segundo
// Ernesto García A00820783
// Creado en Fri Oct 12 21:35:14 CDT 2018

#include<iostream>
#include<vector>
using namespace std;

void addSec(vector<int> &hour) {
  bool added = false;

  for (int i = hour.size() - 1; i >= 0 && added == false; i--){
    hour[i] >= 59 ? hour[i] = 0 : (hour[i]++, added = true);
  }
}

int main() {
  vector<int> hour (3,0);

  cin >> hour[0] >> hour[1] >> hour[2];

  addSec(hour);

  for (int i = 0; i <= 2; i++)
    cout << hour[i] << " ";
  cout << endl;

  // Termina el programa
  return 0;
}
