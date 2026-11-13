/*w.a.c program to print following pattern
             4
            4 3 4
           4 3 2 3 4
          4 3 2 1 2 3 4
*/
#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf("  ");
        }
        for (int j = n; j >= n - i + 1; j--) {
            printf("%d ", j);
        }
        for (int j = n - i + 2; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
