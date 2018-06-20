#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a, b, k;
    long long max = 0, x = 0;
	cin >> n >> m;
	vector<long long> arr(n+1,0);
	while(m--){
		cin >> a >> b >> k;
        arr[a] += k;
        if((b+1) <= n) arr[b+1] -= k;
	}
    for(int i = 1; i <= n; i++){
        x += arr[i];
        if(max < x) max = x;
    }
    cout << max;
	return 0;
}