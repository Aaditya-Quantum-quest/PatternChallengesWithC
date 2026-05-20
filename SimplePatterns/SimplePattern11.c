/*
        1    1    1    2    1    3
        2    1    2    2    2    3
        3    1    3    2    3    3
        4    1    4    2    4    3
        5    1    5    2    5    3
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
    printf("By Using For Loop :\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d    ", i);
            printf("%d    ", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    printf("By Using While Loop :\n");
    while (i <= 5) {
        j = 1;
        while (j <= 3) {
            printf("%d    ", i);
            printf("%d    ", j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    printf("By Using Do While Loop :\n");
    do {
        j = 0;
        do {
            j++;
            printf("%d    ", i);
            printf("%d    ", j);
        } while (j <= 2);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
