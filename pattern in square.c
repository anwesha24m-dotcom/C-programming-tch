//wcp to print star pattern in square format
#include <stdio.h>
int main()
{
	int n,i,j;
	printf("enter number for the size of the square:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
        printf("\n");
	}
	return 0;
}
