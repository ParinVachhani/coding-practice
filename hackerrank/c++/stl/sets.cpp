//Problem link - https://www.hackerrank.com/challenges/cpp-sets
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/elvis_dukaj

#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int q,x,y;
    cin >> q;
    while(q--){
        cin >> x >> y;
        if(x==1)
            s.insert(y);
        else if(x==2)
            s.erase(y);
        else if(x==3){
            if(s.find(y)==s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}