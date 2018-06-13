#include <bits/stdc++.h>
using namespace std;

int main(){
	// Halve the lookup region starting from middle of array
	int array[9] = {1,2,3,4,5,7,7,8,9};
	int a = 0, n = 9, b = n-1, x = 7;
	while (a <= b){
		int k = (a+b)/2;
		if (array[k] == x) cout << x << " found at index " << k << "\n";
		if (array[k] > x) b = k-1;
		else a = k+1;
	}
	// Make exponentially decreasing jumps to reach the desired number
	int A[9] = {1,2,3,4,5,6,7,8,9};
	int k = 0;
	for(int b = n/2; b >= 1; b /= 2){
		while(((k+b) < n) && (A[k+b] <= x)) k += b;
	}
	if (A[k] == x){
		cout << x << " found at index " << k << "\n";
	}
	// Using inbuilt C++ functions
	auto i = lower_bound(array,array+n,x)-array;
	if (i < n && array[i] == x) {
		cout << x << " found at index " << i << "\n";
	}
	// Count number of occurences of x using inbuilt functions
	auto p = lower_bound(array, array+n, x);
	auto q = upper_bound(array, array+n, x);
	cout << x << " found " << q-p  << " times" << "\n";
	// Count number of occuerences of x using inbuilt functions
	auto r = equal_range(array, array+n, x);
	cout << x << " found " << r.second-r.first << " times" << "\n";	
	return 0;
}