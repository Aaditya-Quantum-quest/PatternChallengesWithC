/*
        1     3     5     7     9
        3     5     7     9   11
        5     7     9   11   13
        7     9   11   13   15
        9   11   13   15   17

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
    int count;
    for (i = 1; i <= 10; i = i + 2) {
        count = i;
        for (j = 1; j <= 5; j++) {
            if (count <= 9) {
                printf("  ");
            }
            printf("%d    ", count);
            count += 2;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    int count;
    printf("By Using While Loop :\n");
    while (i <= 10) {
        count = i;
        j = 1;
        while (j <= 5) {
            if (count <= 9) {
                printf("  ");
            }
            printf("%d    ", count);
            count += 2;
            j++;
        }
        printf("\n");
        i += 2;
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    int count;
    printf("By Using Do While Loop :\n");
    do {
        count = i;
        j = 1;
        do {
            if (count <= 9) {
                printf("  ");
            }
            printf("%d    ", count);
            count += 2;
            j++;
        } while (j <= 5);
        printf("\n");
        i += 2;
    } while (i <= 10);
    printf("\n");
    return 0;
}
