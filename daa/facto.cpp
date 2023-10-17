#include <stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int n , r;
	printf("enter n and r");
	printf("%d %d",&n,&r);
	int per=fact(n)/fact(n-r);
	int com=fact(n)/fact(n-r)*fact(n);
	printf("permutation=%d",per);
	printf("COMBINATION=%d",com);
	return 0;
}
int fact (int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
