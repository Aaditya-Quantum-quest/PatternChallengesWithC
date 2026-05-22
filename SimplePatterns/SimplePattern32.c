/*
      A     F     K     P     U
      B     G     L     Q     V
      C     H     M    R    W
      D      I      N    S     X
      E     J      O    T     Y

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
    int count;
    printf("By Using For Loop : \n");
    for (i = 65; i <= 69; i++) {
        count = i;
        for (j = 1; j <= 5; j++) {
            printf("%c    ", count);
            count += 5;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 65;
    int j;
    int count;
    printf("By Using While Loop : \n");
    while (i <= 69) {
        count = i;
        j = 1;
        while (j <= 5) {
            printf("%c    ", count);
            count += 5;
            j++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 65;
    int j;
    int count;
    printf("By Using Do While Loop : \n");
    do {
        count = i;
        j = 1;
        do {
            j++;
            printf("%c    ", count);
            count += 5;
        } while (j <= 5);
        i++;
        printf("\n");
    } while (i <= 69);
    printf("\n");
    return 0;
}
