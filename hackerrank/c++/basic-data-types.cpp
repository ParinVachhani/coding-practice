//Problem link - https://www.hackerrank.com/challenges/c-tutorial-basic-data-types
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
#include <cstdio>
#include <iomanip> //for using setprecision()
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n", a);
    printf("%ld\n", b);
    printf("%c\n", c);
    //printf("%f\n", d);
    cout << fixed << setprecision(3) << d << endl;
    //printf("%lf", e);
    cout << fixed << setprecision(9) << e << endl;
    return 0;
}