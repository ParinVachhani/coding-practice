//Problem link - https://www.hackerrank.com/challenges/prettyprint
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/elvis_dukaj

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		cout << hex << left << showbase << nouppercase << (long long)A << endl;
		cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
		cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;
	}
	return 0;
}