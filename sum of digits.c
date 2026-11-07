//w.a.c program to calculate sum of digits//
#include <stdio.h>
int main()
{
	int digit=0,sum=0,n;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		sum=sum+digit;
	}
	printf("sum of digits=%d",sum);	
	return 0;
}
