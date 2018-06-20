#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int N, Q, q, x, y, lastans = 0;
    cin >> N >> Q;
    vector< vector< int > > vec(N, vector< int >(0));
    for(int i = 0; i < Q; i++) {
        cin >> q >> x >> y;
        int X = (x ^ lastans) % N;
        if(q == 1)
            vec[X].push_back(y);
        else {
            lastans = vec[X][y % vec[X].size()];
            cout << lastans << endl;
        }
    }
	return 0;
}