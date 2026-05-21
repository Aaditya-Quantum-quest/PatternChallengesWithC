/*
         A     A     A     A     A
         B     B     B     B     B
         C     C     C     C     C
         D     D     D     D     D
         E     E     E     E      E
 */

#include <stdio.h>

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int count = 65;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%c    ", count);
        }
        count = count + 1;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i=1;
    int j;
    int count = 65;
    printf("By Using While Loop : \n");
    while (i<=5) {
        j=1;
        while (j<=5) {
            printf("%c    ", count);
            j++;
        }
        printf("\n");
        count = count + 1;
        i++;
    }
    printf("\n");
    return 0;
}
