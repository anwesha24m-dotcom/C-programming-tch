//2+5+8+11+14+...upto n terms. w.c.p to calculate sum of the given series.//
#include<stdio.h>
int main()
{
	int n,i,c,sum;
	printf("enter the number:");
	scanf("%d",&n);
     i=2;
	 sum=0;
	 c=0;
	 while(c<n)
	{
	 	sum=sum+i;
	 	i+=3;
	 	c++;
	}
	 printf("sum=%d",sum);
	 return 0;
}
