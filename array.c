//w.a.c program to take a input as an array and display into the screen//
#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the values:\n");
	for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
    {
		printf("%d",a[i]);
	}
	return 0;
}
