//Problem link - https://www.hackerrank.com/challenges/c-tutorial-for-loop
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
using namespace std;

int main() {
    // Complete the code.
    int lower_bound, upper_bound;
    cin >> lower_bound;
    cin >> upper_bound;
    int iter;
    for(iter=lower_bound; iter<=upper_bound; iter++){
        if(iter>=1 && iter<=9){
            if(iter==1){ cout << "one" << endl; }
            else if(iter==2){ cout << "two" << endl; }
            else if(iter==3){ cout << "three" << endl; }
            else if(iter==4){ cout << "four" << endl; }
            else if(iter==5){ cout << "five" << endl; }
            else if(iter==6){ cout << "six" << endl; }
            else if(iter==7){ cout << "seven" << endl; }
            else if(iter==8){ cout << "eight" << endl; }
            else{ cout << "nine" << endl; }
        }
        if(iter>9){
            if(iter%2==0){ cout << "even" << endl; }
            else{ cout << "odd" << endl; }
        }
    }
    return 0;
}