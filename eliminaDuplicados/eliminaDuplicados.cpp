// eliminaDuplicados
// Ernesto García A00820783
// Creado en Tue Oct 23 10:41:34 CDT 2018

#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
  // Declarar variables
  int length = 0;
  vector<int> repNums;
  map <int, bool> record;
  
  cin >> length;

  int nums[length];
  
  for (int i = 0; i < length; i++) {
    cin >> nums[i];
  }

  for(int i = 0; i < length; i++) {
    if(!record[nums[i]]){
      repNums.push_back(nums[i]);
      record[nums[i]] = true;
    }
  }

  for (int i = 0; i < repNums.size(); i++) {
    cout << repNums[i] << endl;
  }

  // Termina el programa
  return 0;
}
