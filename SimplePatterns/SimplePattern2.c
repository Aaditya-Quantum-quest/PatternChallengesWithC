/*
      1   1   1   1   1
      1   1   1   1   1
      1   1   1   1   1
      1   1   1   1   1
      1   1   1   1   1
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
        for (j = 0; j < 5; j++) {
            const short int VALUE = 1;
            printf("%d   ", VALUE);
        }
        printf("\n");
    }
    printf(" \n");
    return 0;
}

int UsingWhileLoop() {
    int i = 0;
    int j = 0;
    const short int VALUE = 1;
    printf("By Using While Loop : \n");
    while (i < 5) {
        j = 0;
        while (j < 5) {
            printf("%d   ", VALUE);
            j++;
        }
        printf("\n");
        i++;
    }
    printf(" \n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 0;
    int j = 0;
    const short int VALUE = 1;
    printf("By Using Do While Loop : ");
    do {
        printf("\n");
        i++;
        j = 0;
        do {
            j++;
            printf("%d   ", VALUE);
        }while (j<5);
    } while (i<5);
    return 0;
}
