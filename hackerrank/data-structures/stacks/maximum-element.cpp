// https://www.hackerrank.com/challenges/maximum-element/problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int n, x;
    cin >> n;
    while(n--){
        int q;
        cin >> q;
        switch(q){
        case 1:
            cin >> x;
            if (st.empty()) st.push(x);
            else st.push(max(x, st.top()));
            break;
        case 2:
            if (!st.empty()) st.pop();
            break;
        case 3:
            cout << st.top() << endl;
            break;
        default:
            break;
        }
    }
	return 0;
}