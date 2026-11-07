// w.a.c program to count digits of a whole number//
#include<stdio.h>
int main()
{
	int num, count=0, digit;
	printf("enter the whole number of count:");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		printf("%d\n",digit);
		count++;
		num=num/10;
	}
	printf("counted digits are:%d",count);
	return 0;
}
