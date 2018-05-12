//Problem link - https://www.hackerrank.com/challenges/virtual-functions
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    int age;
    string name;
    virtual void getdata(){
        cin >> name >> age;
    }
    virtual void putdata(){
        cout << name << " " << age << endl;
    }        
};
class Professor : public Person {
public:
    Professor(){ cur_id = ++id; }
    int publications;
    static int id;
    int cur_id;
    void getdata(){
        cin >> name >> age >> publications;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person {
#define NUM_OF_SUBJECTS 6
public:
    Student() { cur_id = ++id; }
    int marks[NUM_OF_SUBJECTS];
    static int id;
    int cur_id;
    void getdata(){
        cin >> name >> age;
        for(int i=0; i<NUM_OF_SUBJECTS; i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        int totalMarks = 0;
        for(int i=0; i<NUM_OF_SUBJECTS; i++){
            totalMarks += marks[i];
        }
        cout << name << " " << age << " " << totalMarks << " " << cur_id << endl;
    }
};
int Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}