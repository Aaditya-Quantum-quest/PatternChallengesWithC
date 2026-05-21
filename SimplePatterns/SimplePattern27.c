/*
         A     B     C     D     E
         A     B     C     D     E
         A     B     C     D     E
         A     B     C     D     E
         A     B     C     D     E
 */

#include <stdio.h>

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int count;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        count =65;
        for (j = 1; j <= 5; j++) {
            printf("%c    ", count);
            count = count + 1;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
