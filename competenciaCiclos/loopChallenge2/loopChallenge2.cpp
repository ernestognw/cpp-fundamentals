// LoopChallenge2
// Ernesto García A00820783
// Creado en Fri Oct  5 10:52:39 CDT 2018

#include<iostream>
using namespace std;

int main() {
  char value = '+';
  int timer = 0;

  cin >> timer;
  
  while(value != 'S'){
    cin >> value;

    if (value != 'S'){

      value == '+' ?
      timer++ :
      timer --;

      if (timer >= 60) 
        timer = 0;

      if (timer < 0) 
        timer = 59;

      cout << timer << endl;
    } 
  };

  return 0;
}
