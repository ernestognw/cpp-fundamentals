  // SumaMatrices
  // Ernesto García A00820783
  // Creado en Fri Oct 26 11:14:02 CDT 2018

  #include<iostream>
  using namespace std;

  int main() {
    // Declarar variables
    int n = 0;

    cin >> n;

    int newMatrix[n][n];
    int firstMatrix[n][n];
    int secondMatrix[n][n];

    for(int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> firstMatrix[i][j];
      }
    }

    for(int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> secondMatrix[i][j];
      }
    }

    for(int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        newMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
      }
    }  

    for(int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cout << newMatrix[i][j];
      }
      cout << endl;
    } 
    // Termina el programa
    return 0;
  }
