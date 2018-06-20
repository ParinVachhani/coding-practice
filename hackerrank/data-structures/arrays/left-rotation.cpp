#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> v, ans;
    for(int j = 0; j < n; j++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    for(int j = 0; j < n; j++){
        ans.push_back(v[((j+d) % n)]);
    }
    for(auto x : ans){
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}