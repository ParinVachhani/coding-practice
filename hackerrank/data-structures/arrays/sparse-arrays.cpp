#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	map<string, int> string_dict;
	vector<int> counts;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		if(string_dict.find(s) != string_dict.end()) string_dict[s]++;
		else if(string_dict.find(s) == string_dict.end()) string_dict[s] = 1;
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		string s;
		cin >> s;
		counts.push_back(string_dict[s]);
	}
	for(int i = 0; i < q; ++i){
		cout << counts[i] << "\n";
	}
	return 0;
}