/*
         2     4     6     8   10
       12   14   16   18   20
       22   24   26   28   30
       32   34   36   38   40
       42   44   46   48   50

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
    short counter = 2;
    printf("By Using For Loop :\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
            counter = counter + 2;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    short counter = 2;
    printf("By Using While Loop :\n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
            counter = counter + 2;
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
    short counter = 2;
    printf("By Using Do While Loop :\n");
    do {
        j = 1;
        do {
            j++;
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d   ", counter);
            counter = counter + 2;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
