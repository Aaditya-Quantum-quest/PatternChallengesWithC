/*
          E     D     C     B     A
          E     D     C     B     A
          E     D     C     B     A
          E     D     C     B     A
          E     D     C     B     A
 */

#include <stdio.h>

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    UsingDoWhileLoop();
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int count;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        count = 69;
        for (j = 1; j <= 5; j++) {
            printf("%c     ", count);
            count--;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    int count;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        count = 69;
        while (j <= 5) {
            printf("%c     ", count);
            count--;
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    int count;
    printf("By Using Do While Loop : \n");
    do {
        count = 69;
        j = 1;
        do {
            j++;
            printf("%c     ", count);
            count--;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
