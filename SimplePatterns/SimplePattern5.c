/*
         5    4    3    2    1
         5    4    3    2    1
         5    4    3    2    1
         5    4    3    2    1
         5    4    3    2    1

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
    printf("By Using For Loop : \n");
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= 1; j--) {
            printf("%d    ", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 0;
    int j;
    printf("By Using While Loop : \n");
    while (i < 5) {
        j = 5;
        while (j >= 1) {
            printf("%d    ", j);
            j--;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 0;
    int j;
    printf("By Using Do While Loop : \n");
    do {
        i++;
        j = 6;
        do {
            j--;
            printf("%d    ", j);
        } while (j > 1);
        printf("\n");
    } while (i < 5);
    printf("\n");
    return 0;
}
