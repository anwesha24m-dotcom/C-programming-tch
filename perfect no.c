//w.a.c program to check whether a no is perfect or not//
#include<stdio.h>
int main()
{
	int n, s=0, i=1;
	printf("enter the number:");
	scanf("%d",&n);
	for( i=1;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	if(s==n)
	printf("it is a perfect number");
	else
	printf("it is not a perfect number");
	return 0;
}
