//1+2+4+7+11+...upto n terms. W.A.P to calculate the sum of given series//
#include <stdio.h>
int main()
{
	int n;
	int i=1;
	int term=1;
	int sum=0;
	printf("enter the value of n \n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=term;
		term+=i;
		i++;
	}
	printf("the sum is: %d",sum);
	return 0;
}
