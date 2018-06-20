// Problem link - https://www.hackerrank.com/challenges/2d-array/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = -1000, currentSum = 0;
    int row, col;
    for(row = 0; row < 4; row++){
        for(col = 0; col < 4; col++){
            currentSum = 0;
            currentSum += arr[row][col];
            currentSum += arr[row][col+1];
            currentSum += arr[row][col+2];
            currentSum += arr[row+1][col+1];
            currentSum += arr[row+2][col];
            currentSum += arr[row+2][col+1];
            currentSum += arr[row+2][col+2];
            if(currentSum > maxSum) maxSum = currentSum;
        }
    }
    return maxSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
