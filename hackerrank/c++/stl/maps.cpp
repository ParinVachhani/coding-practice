//Problem link - https://www.hackerrank.com/challenges/cpp-maps
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/elvis_dukaj

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> marks;
    int q,t,y;
    string x;
    cin >> q;
    while(q--){
        cin >> t >> x;
        if(t==1){
            cin >> y;
            if(marks.find(x)==marks.end())
                marks.insert(make_pair(x,y));
            else
                marks[x] += y;
        }
        else if(t==2){
            marks.erase(x);
        }
        else if(t==3){
            map<string,int>::iterator itr = marks.find(x);
            cout << ( itr == marks.end() ? 0 : itr->second) << endl;
        }
    }
    return 0;
}