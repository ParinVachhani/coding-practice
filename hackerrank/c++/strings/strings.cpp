//Problem link - https://www.hackerrank.com/challenges/c-tutorial-strings
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;
    cout << x.size() << " " << y.size() << endl;
    cout << x + y << endl;
    cout << y[0];
    for(int i=1; i<x.size(); i++){
        cout << x[i];
    }
    cout << " ";
    cout << x[0];
    for(int i=1; i<y.size(); i++){
        cout << y[i];
    }
    return 0;
}