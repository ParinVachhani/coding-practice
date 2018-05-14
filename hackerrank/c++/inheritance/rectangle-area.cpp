//Problem link - https://www.hackerrank.com/challenges/rectangle-area
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include <iostream>
using namespace std;

class Rectangle {
protected:
    int width,height;
public:
    virtual void display() const {
        cout << width << ' ' << height << endl;
    }
};
class RectangleArea : public Rectangle {
public:
    void read_input(){
        cin >> width >> height;
    }
    void display() const override{
        cout << width*height << endl;
    }
};

int main(){
    RectangleArea r_area;
    r_area.read_input();
    r_area.Rectangle::display();
    r_area.display();    
    return 0;
}