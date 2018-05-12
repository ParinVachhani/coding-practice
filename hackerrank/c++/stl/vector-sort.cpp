//Problem link - https://www.hackerrank.com/challenges/vector-sort
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,temp;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for (const auto iter: v)
        cout << iter << ' ';
    cout << endl;
    return 0;
}