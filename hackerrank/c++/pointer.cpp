//Problem link - https://www.hackerrank.com/challenges/c-tutorial-pointer
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <cstdio>
#include <cmath>
using namespace std;

void update(int* pa,int* pb) {
    // Complete this function    
    int x = *pa;
    *pa = *pa + *pb;
    *pb = abs(x - *pb);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int* pa = &a;
    int* pb = &b;
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}