//Problem link - https://www.hackerrank.com/challenges/overloading-ostream-operator
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
using namespace std;

class Person {
public:
    Person(const string& first_name, const string& last_name) : first_name_(first_name), last_name_(last_name) {}
    const string& get_first_name() const {
      return first_name_;
    }
    const string& get_last_name() const {
      return last_name_;
    }
private:
    string first_name_;
    string last_name_;
};

ostream& operator<<( ostream &output, const Person &P ) { 
    output << "first_name=" << P.get_first_name() << ",last_name=" << P.get_last_name();
    return output;
};

int main() {
    string first_name, last_name, event;
    cin >> first_name >> last_name >> event;
    auto p = Person(first_name, last_name);
    cout << p << " " << event << endl;
    return 0;
}