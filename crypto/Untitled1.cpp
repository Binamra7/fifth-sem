#include<iostream>
#include<iomanip>
using namespace std;
int area();
int area(int);
int area(int,int);
int main()
{
	area();
	area(2);
	area(6,8);
}
int area()
{
	int l,b;
	cout<<"Enter the value of l and b: ";
	cin>>l>>b;
	cout<<"Area of rectangle: "<<l*b;
}
int area(int)
{
	int r;
	cout<<"the area of circle is: "<<3.14*r*r;
}
int area(int,int)
{
	int A,l,b;
	A = (l*b)/2;
	cout<<"The area of triangle"<<A;
	return(0);
}
