/*
      A     B     C     D     E
      B     C     D     E     F
      C     D     E     F     G
      D     E     F     G     H
      E     F     G     H      I
 */
#include<stdio.h>

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
    for (i = 65; i <= 69; i++) {
        count = i;
        for (j = 1; j <= 5; j++) {
            printf("%c    ", count);
            count++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 65;
    int j;
    int count;
    printf("By Using While Loop : \n");
    while (i <= 69) {
        j = 1;
        count = i;
        while (j <= 5) {
            printf("%c    ", count);
            count++;
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 65;
    int j;
    int count;
    printf("By Using Do While Loop : \n");
    do {
        count = i;
        j = 1;
        do {
            j++;
            printf("%c    ", count);
            count++;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 69);
    printf("\n");
    return 0;
}
