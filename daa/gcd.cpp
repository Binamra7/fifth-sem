#include<iostream>

using namespace std;

int count=0;

int GCD(int a, int b)
{
	int r;
	while(b!=0)
	{
		count++;
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"GCD = ";
	if(a>b) cout<<GCD(a,b);
	else cout<<GCD(b,a);
	cout<<endl;
	
	cout<<"Analysis"<<endl<<"TimeTaken = "<<count;
	return 0;
}
