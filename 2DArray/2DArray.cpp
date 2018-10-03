#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int> > arr, int length) {
    int result = 0;
    int preelim = 0;
    for(int i = 0; i < length - 1; i++){
        for (int j = 0; j < length - 1; i++) {
            cout << "ok";
            preelim += arr[i][j];       // a
            preelim += arr[i][j+1];     // b
            preelim += arr[i][j+2];     // c
            preelim += arr[i+1][j+1];   // d
            preelim += arr[i+2][j];     // e
            preelim += arr[i+2][j+1];   // f
            preelim += arr[i+2][j+2];   // g
            // Check if the new preelim of the hourglass evaluated is bigger
            if(preelim > result) {
                result = preelim;
            }
            // Restart the preelim variable
            preelim = 0;
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int length = 6;

    vector<vector<int> > arr(length);
    for (int i = 0; i < length; i++) {
        arr[i].resize(length);

        for (int j = 0; j < length; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr, length);

    fout << result << "\n";

    fout.close();

    return 0;
}
