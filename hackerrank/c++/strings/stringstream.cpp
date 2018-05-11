//Problem link - https://www.hackerrank.com/challenges/c-tutorial-stringstream
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> v;
    int num;
    char c;
    while(ss >> num){
        v.push_back(num);
        ss >> c;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}