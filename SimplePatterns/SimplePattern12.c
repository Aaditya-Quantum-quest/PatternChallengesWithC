/*
          1    6    11    16    21
          2    7    12    17    22
          3    8    13    18    23
          4    9    14    19    24
          5  10    15    20    25
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
    short counter;
    printf("By Using For Loop :\n");
    for (i = 1; i <= 5; i++) {
        counter = i;
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter = counter + 5;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    short counter = 1;
    printf("By Using While Loop :\n");
    while (i <= 5) {
        j = 1;
        counter = i;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter = counter + 5;
            j++;
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
    short counter = 1;
    printf("By Using Do While Loop :\n");
    do {
        i++;
        counter = i;
        j = 1;
        do {
            j++;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter = counter + 5;
        } while (j <= 5);
        printf("\n");
    } while (i <= 4);
    printf("\n");
    return 0;
}
