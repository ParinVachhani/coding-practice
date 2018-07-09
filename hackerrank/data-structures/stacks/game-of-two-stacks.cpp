// https://www.hackerrank.com/challenges/game-of-two-stacks

#include <bits/stdc++.h>
using namespace std;

int twoStacks(int x, vector<int> a, vector<int> b) {
	int currentSum = 0;
	
}

int main(){
	int g;
	cin >> g;
	int n, m, x, temp;
	while(g--){
		cin >> n >> m >> x;
		vector<int> a,b;
		for(int i = 0; i < n; i++){
			cin >> temp;
			a.push_back(temp);
		}
		for(int i = 0; i < m; i++){
			cin >> temp;
			b.push_back(temp);
		}
		cout << twoStacks(x, a, b) << "\n";
	}
	return 0;
}