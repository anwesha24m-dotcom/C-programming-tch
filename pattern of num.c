/* w.c.p to print the pattern
12345
1234
123
12
1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1; i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
