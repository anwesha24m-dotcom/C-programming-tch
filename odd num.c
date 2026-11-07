//W.C.P to display odd numbers from 1 to n//
#include <stdio.h>
int main ()
{
	int n, i=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("odd numbers from 1 to %d\n",n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
