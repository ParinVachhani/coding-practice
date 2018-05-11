//Problem link - https://www.hackerrank.com/challenges/box-it
//Code author - Parin Vachhani - https://github.com/parinvachhani

#include<bits/stdc++.h>
using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    private:
        int l,b,h;
    public:
        Box(){
            l=b=h=0;
        }
        Box(int len, int brd, int hgt){
            l=len; b=brd; h=hgt;
        }
        Box(const Box &B){
            l=B.getLength();
            b=B.getBreadth();
            h=B.getHeight();
        }
        int getLength() const{
            return l;
        }
        int getBreadth() const{
            return b;
        }
        int getHeight() const{
            return h;
        }
        long long CalculateVolume(){
            return (long long) l*b*h;
        }
        //apparently only one of the conditions needs to be true for A < B
        bool operator < (const Box &box2){
            if((l<box2.l)||((b<box2.b)&&(l==box2.l))||((h<box2.h)&&(l ==box2.l)&&(b==box2.b))){
                return true;
            }else{
                return false;
            }            
        }
        //Input/output operator overloading needs to be declared outside the class
        //Or it can be declared using 'friend' inside the class like below
        friend ostream& operator<< (ostream& output, const Box& B){
            output << B.l << " " << B.b << " " << B.h;
            return output;
        }
};

void check2(){
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main(){
	check2();
}