/*
        E     E     E     E     E
        D     D     D     D     D
        C     C     C     C     C
        B      B     B     B     B
        A      A     A     A     A
 */

#include <stdio.h>

int UsingWhileLoop();

int UsingDoWhileLoop();

int UsingForLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    UsingDoWhileLoop();
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int count = 69;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%c     ", count);
        }
        count--;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    int count = 69;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            printf("%c     ", count);
            j++;
        }
        printf("\n");
        count--;
        i++;
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    int count = 69;
    printf("By Using Do While Loop : \n");
    do {
        j = 1;
        do {
            j++;
            printf("%c     ", count);
        } while (j <= 5);
        printf("\n");
        i++;
        count--;
    } while (i <= 5);
    printf("\n");
    return 0;
}
