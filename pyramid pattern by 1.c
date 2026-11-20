/* w.a.c program to print the following pattern 
    1
  1   1
 1     1
1       1
111111111
*/
#include<stdio.h>
int main()
{
    int i,j,rows=5;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++){
            if(k==1|| k==(2*i-1)||i==rows){
                printf("1");
            }else{
                printf(" ");
            }
        }
    printf("\n");
 }
    return 0;
}
