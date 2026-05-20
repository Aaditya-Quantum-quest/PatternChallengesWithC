/*
        1    3    5    7    9
      11  13  15  17  19
      21  23  25  27  29
      31  33  35  37  39
      41  43  45  47  49

 */

#include<stdio.h>

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
    short counter = 1;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
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
    short counter = 1;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
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
    short counter = 1;
    printf("By Using Do While Loop : \n");
    do {
        j = 1;
        do {
            if (counter <= 9) {
                printf("  ");
            }
            printf("%d    ", counter);
            counter = counter + 2;
            j++;
        } while (j <= 5);
        i++;
        printf("\n");
    } while (i <= 5);
    printf("\n");
    return 0;
}
