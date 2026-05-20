/*
         1    1    1    1    1
         0    0    0    0    0
         1    1    1    1    1
         0    0    0    0    0
         1    1    1    1    1

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
    short count = 0;
    printf("By Using For Loop : \n");
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            count++;
        } else {
            count--;
        }
        for (j = 0; j < 5; j++) {
            printf("%d    ", count);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    short count = 0;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        if (i % 2 == 0) {
            count--;
        } else {
            count++;
        }
        while (j <= 5) {
            printf("%d    ", count);
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
    short count = 0;
    printf("By Using Do While Loop : \n");
    do {
        j = 1;
        if (i % 2 == 0) {
            count--;
        } else {
            count++;
        }
        do {
            j++;
            printf("%d    ", count);
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
