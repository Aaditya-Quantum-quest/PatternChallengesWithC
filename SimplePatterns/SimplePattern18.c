/*
        0    1    0    1    0
        1    0    1    0    1
        0    1    0    1    0
        1    0    1    0    1
        0    1    0   1    0

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
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (count == 0) {
                printf("%d    ", count);
                count = count + 1;
            } else {
                printf("%d    ", count);
                count--;
            }
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
        while (j <= 5) {
            if (count == 0) {
                printf("%d    ", count);
                count = count + 1;
            } else {
                printf("%d    ", count);
                count--;
            }
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
        do {
            if (count == 0) {
                printf("%d    ", count);
                count = count + 1;
            } else {
                printf("%d    ", count);
                count--;
            }
            j++;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
