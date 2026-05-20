/*
         5    6    15    16    25
         4    7    14    17    24
         3    8    13    18    23
         2    9    12    19    22
         1  10    11    20    21
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
    int x = 1;
    int y = 9;
    int counter;
    printf("By Using For Loop :\n");
    for (i = 5; i >= 1; i--) {
        counter = i;
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            if (j % 2 == 0) {
                counter = counter + y;
            } else {
                counter = counter + x;
            }
        }
        printf("\n");
        x = x + 2;
        y = y - 2;
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 5;
    int j;
    int x = 1;
    int y = 9;
    int counter;
    printf("By Using While Loop :\n");
    while (i >= 1) {
        counter = i;
        j = 1;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            if (j % 2 == 0) {
                counter = counter + y;
            } else {
                counter = counter + x;
            }
            j++;
        }
        x = x + 2;
        y = y - 2;
        i--;
        printf("\n");
    }
    printf("\n");
    return 0;
}


int UsingDoWhileLoop() {
    int i = 5;
    int j;
    int x = 1;
    int y = 9;
    int counter;
    printf("By Using Do While Loop :\n");
    do {
        counter = i;
        j = 1;
        do {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            if (j % 2 == 0) {
                counter = counter + y;
            } else {
                counter = counter + x;
            }
            j++;
        } while (j <= 5);
        printf("\n");
        i--;
        x = x + 2;
        y = y - 2;
    } while (i >= 1);
    printf("\n");
    return 0;
}
