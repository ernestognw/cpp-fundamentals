// LoopChallenge2
// Ernesto García A00820783
// Creado en Fri Oct  5 10:52:39 CDT 2018

#include<iostream>
using namespace std;

void validate(int &mins) {
  if (mins >= 60)
    mins = 0;

  if (mins < 0)
    mins = 59;
  
  cout << mins << endl;    
}

void minutes(char input, int &mins){
  switch(input){
    case '+':
      mins++;
      validate(mins);
    break;

    case '-':
      mins--;
      validate(mins);
    break;

    default:
      return;
  }
}

int main() {
  char value = '+';
  int mins = 0;
  
  cin >> mins;

  do { 
    cin >> value;
    minutes(value, mins);
  }
  while(value != 'S');

  return 0;
}
