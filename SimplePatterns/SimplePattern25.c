/*
         1     0     1     0     1
         1     0     1     0     1
         1     0     1     0     1
         1     0     1     0     1
         1     0     1     0     1

 */

#include <stdio.h>

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    UsingDoWhileLoop();
}

int UsingForLoop() {
    int i;
    int j;
    int count;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        count = 1;
        for (j = 1; j <= 5; j++) {
            if (count == 1) {
                printf("%d    ", count);
                count--;
            } else {
                printf("%d    ", count);
                count++;
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
    int count;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        count = 1;
        j = 1;
        while (j <= 5) {
            if (count == 1) {
                printf("%d    ", count);
                count--;
            } else {
                printf("%d    ", count);
                count++;
            }
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
    int count;
    printf("By Using Do While Loop : \n");
    do {
        count = 1;
        j = 1;
        do {
            j++;
            if (count == 1) {
                printf("%d    ", count);
                count--;
            } else {
                printf("%d    ", count);
                count++;
            }
        } while (j <= 5);
        i++;
        printf("\n");
    } while (i <= 5);
    printf("\n");
    return 0;
}
