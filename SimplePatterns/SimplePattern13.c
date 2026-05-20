/*
         1    10    11    20    21
         2      9    12    19    22
         3      8    13    18    23
         4      7    14    17    24
         5      6    15    16    25
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
    int x = 9;
    int y = 1;
    for (i = 1; i <= 5; i++) {
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
        x = x - 2;
        y = y + 2;
        printf("\n");
    }
    printf("\n");
    return 0;
}


int UsingWhileLoop() {
    int i = 1;
    int j;
    short counter;
    printf("By Using While Loop :\n");
    int x = 9;
    int y = 1;
    while (i <= 5) {
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
            j = j + 1;
        }
        x = x - 2;
        y = y + 2;
        i++;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    short counter;
    printf("By Using Do While Loop :\n");
    int x = 9;
    int y = 1;
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
            j = j + 1;
        } while (j <= 5);
        x = x - 2;
        y = y + 2;
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
