//Problem link - https://www.hackerrank.com/challenges/vector-erase
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n,temp,first,last;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    cin >> temp;
    v.erase(v.begin()+temp-1);
    cin >> first >> last;
    v.erase(v.begin()+first-1,v.begin()+last-1);
    cout << v.size() << endl;
    for (const auto iter: v)
        cout << iter << ' ';
    cout << endl;    
    return 0;
}