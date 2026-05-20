/*
        5   5   5   5   5
        4   4   4   4   4
        3   3   3   3   3
        2   2   2   2   2
        1   1   1   1   1
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
    short int counter = 5;
    printf("By Using For Loop : \n");
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= 1; j--) {
            printf("%d   ", counter);
        }
        counter--;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 0;
    int j;
    short int counter = 5;
    printf("By Using While Loop : \n");
    while (i < 5) {
        j = 0;
        while (j < 5) {
            printf("%d   ", counter);
            j++;
        }
        i++;
        counter--;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 0;
    int j;
    short int counter = 5;
    printf("By Using Do While Loop : \n");
    do {
        j = 0;
        do {
            j++;
            printf("%d   ", counter);
        } while (j < 5);
        printf("\n");
        counter--;
        i++;
    } while (i < 5);
    printf("\n");
    return 0;
}
