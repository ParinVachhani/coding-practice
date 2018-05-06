//Problem link - https://www.hackerrank.com/challenges/variable-sized-arrays
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
using namespace std;

/* Solution in C
#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,q,m,l,k;
    scanf("%d%d",&n,&q);
    int *arr[n];
    for(int i = 0 ; i < n;i++){
        scanf("%d",&m);
        arr[i] = (int *)malloc(m * sizeof(int));
        for(int j = 0 ; j < m ;j++){
             scanf("%d",&arr[i][j]);
        }
    }
    while(q--){
        scanf("%d%d",&l,&k);
        printf("%d\n",arr[l][k]);
    } 
    return 0;
}
*/

int main(){
    int n, q;
    cin >> n >> q;
    int** parent_arr = new int* [n];
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        int* sub_arr = new int [k];
        for(int j=0; j<k; j++){
            int num;
            cin >> num;
            sub_arr[j] = num;
        }
        *(parent_arr + i) = sub_arr;
    }
    for(int i=0; i<q; i++){
        int x, y;
        cin >> x >> y;
        cout << parent_arr[x][y] << endl;
    }
    return 0;
}