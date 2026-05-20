/*
        5    10    15    20    25
        4     9     14    19    24
        3     8     13    18    23
        2     7     12    17    22
        1     6     11    16    21
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
    int counter;
    printf("By Using For Loop : \n");
    for (i = 5; i >= 1; i--) {
        counter = i;
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%i    ", counter);
            counter = counter + 5;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 5;
    int j;
    int counter;
    printf("By Using While Loop : \n");
    while (i >= 1) {
        counter = i;
        j = 1;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter = counter + 5;
            j++;
        }
        printf("\n");
        i--;
    }
    printf("\n");
    return 0;
}


int UsingDoWhileLoop() {
    int i = 5;
    int j;
    int counter;
    printf("By Using Do While Loop : \n");
    do {
        counter = i;
        j = 1;
        do {
            j++;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%i    ", counter);
            counter = counter + 5;
        }while (j<=5);
        printf("\n");
        i--;
    }while (i>=1);
    printf("\n");
    return 0;
}