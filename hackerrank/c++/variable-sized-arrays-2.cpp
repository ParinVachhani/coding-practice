//Problem link - https://www.hackerrank.com/challenges/variable-sized-arrays
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
#include <vector>
using namespace std;

/* Alternative solution
int main() {
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
*/

int main(){
    int n,q;
    cin >> n >> q;
    vector< vector<int> > a(n);

    // input each array
    for (int i=0;i<n;i++) {
        int k;
        cin >> k;

        for (int j=0;j<k;j++) {
            int data;
            cin >> data;
            a[i].push_back(data);
        }
    }

    // do the queries
    for (int i=0;i<q;i++) {
        int x,y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}