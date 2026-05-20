/*
         1   2   3   4   5
         1   2   3   4   5
         1   2   3   4   5
         1   2   3   4   5
         1   2   3   4   5
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
    for (i = 0; i < 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d   ", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 0;
    int j;
    printf("By Using While Loop :\n");
    while (i < 5) {
        j = 1;
        while (j <= 5) {
            printf("%d   ", j);
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 0;
    int j;
    printf("By Using Do While Loop :\n");
    do {
        j = 0;
        i++;
        do {
            j++;
            printf("%d   ", j);
        } while (j < 5);
        printf("\n");
    } while (i < 5);
}
