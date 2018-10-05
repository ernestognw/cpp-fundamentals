// LoopChallenge2
// Ernesto García A00820783
// Creado en Fri Oct  5 10:52:39 CDT 2018

#include<iostream>
using namespace std;

void minutes(char input, int &minutes){
  switch(input){
    case '+':
      minutes++;
      cout << minutes;
    break;
    case '-':
      minutes--;
      cout << minutes;
    break;
  }
}

int main() {
  char value = '+';
  int mins = 0;

  do {
    cin >> mins;
  }
  while(value != 'S');

  return 0;
}
