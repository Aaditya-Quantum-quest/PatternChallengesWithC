/*
        1     2     3     4     5
        2     4     6     8   10
        3     6     9   12   15
        4     8   12   16   20
        5   10   15   20   25
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
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            const short counter = i * j;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    short counter;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            counter = i * j;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
            j++;
        }
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
    printf("By Using Do While Loop : \n");
    do {
        j = 0;
        do {
            j++;
            counter = i * j;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
        } while (j <= 4);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
