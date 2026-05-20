/*
        1     2     3     4     5
        2     3     4     5     6
        3     4     5     6     7
        4     5     6     7     8
        5     6     7     8     9
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
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        count = i;
        for (j = 1; j <= 5; j++) {
            printf("%d    ", count);
            count += 1;
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
        count = i;
        j = 1;
        while (j <= 5) {
            printf("%d    ", count);
            count += 1;
            j += 1;
        }
        printf("\n");
        i++;
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
        count = i;
        j = 1;
        do {
            printf("%d    ", count);
            count += 1;
            j++;
        } while (j <= 5);
        printf("\n");
        i++;
    } while (i <= 5);
    printf("\n");
    return 0;
}
