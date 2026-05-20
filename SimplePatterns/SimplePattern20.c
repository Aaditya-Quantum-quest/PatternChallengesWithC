/*
           1    0    1    0    1
           0    0    0    0    0
           1    0    1    0    1
           0    0    0    0    0
           1    0    1    0    1
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
    int i = 1;
    int j;
    int k;
    int count;
    printf("By Using For Loop :\n");
    for (i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            count = 0;
            for (k = 1; k <= 5; k++) {
                printf("%i    ", count);
            }
        } else {
            count = 1;
            for (j = 1; j <= 5; j++) {
                if (count == 1) {
                    printf("%i    ", count);
                    count--;
                } else {
                    printf("%i    ", count);
                    count++;
                }
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
    int k;
    int count = 0;
    printf("By Using While Loop :\n");
    while (i <= 5) {
        j = 1;
        while (j <= 1) {
            if (i % 2 == 0) {
                count = 0;
                for (k = 1; k <= 5; k++) {
                    printf("%i    ", count);
                }
            } else {
                count = 1;
                k = 1;
                while (k <= 5) {
                    if (count == 1) {
                        printf("%i    ", count);
                        count--;
                    } else {
                        printf("%i    ", count);
                        count++;
                    }
                    k++;
                }
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
    int k;
    int count = 0;
    printf("By Using Do While Loop :\n");
    do {
        j = 1;
        do {
            if (i % 2 == 0) {
                count = 0;
                for (k = 1; k <= 5; k++) {
                    printf("%i    ", count);
                }
            } else {
                count = 1;
                k = 1;
                while (k <= 5) {
                    if (count == 1) {
                        printf("%i    ", count);
                        count--;
                    } else {
                        printf("%i    ", count);
                        count++;
                    }
                    k++;
                }
            }
            j++;
            printf("\n");
        } while (j <= 1);
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
