//w.c.p to check whether a number is prime or not using while loop//
#include<stdio.h>
int main()
{
	int n,i=2,c=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			c++;
		}
		i++;
	}
	if(c==1 && n!=1){
		printf("%d is a prime number.\n",n);
	}else{
		printf("%d is not a prime number.\n",n);
	}
	return 0;
}
