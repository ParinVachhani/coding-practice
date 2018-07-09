// https://www.hackerrank.com/challenges/equal-stacks

#include <bits/stdc++.h>
using namespace std;

int getMin(int a, int b, int c){
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int start1 = 0,start2 = 0,start3 = 0;
    int sum1 = 0,sum2 = 0,sum3 = 0;
    int l1 = (int)h1.size();
    int l2 = (int)h2.size();
    int l3 = (int)h3.size();
    for(auto x : h1) sum1 += x;
    for(auto x : h2) sum2 += x;
    for(auto x : h3) sum3 += x;
    int minsum = getMin(sum1, sum2, sum3);
    while((sum1 != sum2) || (sum2 != sum3)){
        if(sum1 > minsum && start1 < l1){
            sum1 -= h1[start1];
            start1++;
        }
        if(sum2 > minsum && start2 < l2){
            sum2 -= h2[start2];
            start2++;
        }
        if(sum3 > minsum && start3 < l3){
            sum3 -= h3[start3];
            start3++;
        }
        if(start1==l1 || start2==l2 || start3==l3)
            return 0;
        minsum = getMin(sum1, sum2, sum3);
    }
    return minsum;
}

int main(){
    int n1, n2, n3, temp;
    cin >> n1 >> n2 >> n3;
    vector<int> h1, h2, h3;
    for(int i = 0; i < n1; i++){
        cin >> temp;
        h1.push_back(temp);
    }
    for(int i = 0; i < n2; i++){
        cin >> temp;
        h2.push_back(temp);
    }
    for(int i = 0; i < n3; i++){
        cin >> temp;
        h3.push_back(temp);
    }
    int result = equalStacks(h1, h2, h3);
    cout << result << "\n";
    return 0;
}