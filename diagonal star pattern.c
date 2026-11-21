/* w.a.c program to print thr pattern below
★      ★
  ★   ★
     ★
  ★   ★
★       ★

*/
#include <stdio.h>
int main()
{
  int i,j,rows=5;
  for( i=1; i<=rows;i++){
    for(j=1;j<=rows;j++){
      if(j==i||j==rows-i+1){
        printf("* ");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
