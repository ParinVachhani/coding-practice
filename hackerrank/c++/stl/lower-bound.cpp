//Problem link - https://www.hackerrank.com/challenges/cpp-lower-bound
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <vector>
#include <iostream>
using namespace std;

int main() {
    int n,temp;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    int q,y;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> y;
        vector<int>::iterator low = lower_bound (v.begin(), v.end(), y);
        if (v[low-v.begin()] == y)
            cout << "Yes " << low-v.begin()+1 << endl;
        else
            cout << "No " << low-v.begin()+1 << endl;
    }
    return 0;
}