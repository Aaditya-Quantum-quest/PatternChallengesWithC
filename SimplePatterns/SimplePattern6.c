/*
           1     2     3     4     5
           6     7     8     9   10
         11   12   13   14   15
         16   17   18   19   20
         21   22   23   24   25

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
    short int counter = 1;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j = 1;
    short int counter = 1;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter++;
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
    short int counter = 1;
    printf("By Using Do While Loop : \n");
    do {
        j = 1;
        do {
            j++;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter++;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
