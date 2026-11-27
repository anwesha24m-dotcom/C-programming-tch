// w.a.c program to find the largest number within an array//
#include<stdio.h>
int main()
{
	int i, n,max;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a[n];
		max=a[0];
		printf("enter the elements:");
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("largest=%d",max);
	return 0;
}
