#include<iostream>

using namespace std;

int main()
{
  int a,b,c,n;
  cout<<"Enter the number of terms of Fibonacci series you want"<<endl;
  cin>>n;
  a=0;
  b=1;
  while(n--)
  {
    cout<<a<<" ";
    c=a+b;
    a=b;
    b=c;
  }
  return 0;
}
