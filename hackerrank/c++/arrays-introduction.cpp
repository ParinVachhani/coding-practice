//Problem link - https://www.hackerrank.com/challenges/arrays-introduction
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int len;
    cin >> len;
    int arr[len];
    for(int iter=0; iter < len; iter++){
        cin >> arr[iter];
    }
    for(int iter=(len-1); iter >= 0; iter--){
        cout << arr[iter] << " ";
    }
    return 0;
}