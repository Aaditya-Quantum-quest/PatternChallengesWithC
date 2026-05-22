/*
       A     B     C     D     E
       F     G     H      I      J
       K     L     M     N     O
       P     Q     R     S     T
       U     V     W    X     Y
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
    int count = 65;
    printf("By Using For Loop : \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%c     ", count);
            count++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i=1;
    int j;
    int count = 65;
    printf("By Using While Loop : \n");
    while (i <= 5) {
        j = 1;
        while (j <= 5) {
            printf("%c     ", count);
            count++;
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i=1;
    int j;
    int count = 65;
    printf("By Using Do While Loop : \n");
    do {
        j = 1;
        do {
            j++;
            printf("%c     ", count);
            count++;
        }while (j <= 5);
        printf("\n");
        i++;
    }while (i <= 5);
    printf("\n");
    return 0;
}
