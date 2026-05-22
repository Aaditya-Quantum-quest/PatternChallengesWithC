/*
        E     J     O     T     Y
        D     I      N     S     X
        C    H     M     R    W
        B    G      L     Q     V
        A    F      K     P     U
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
    printf("By Using For Loop ; \n");
    for (i = 69; i >= 65; i--) {
        count = i;
        for (j = 1; j <= 5; j++) {
            printf("%c     ", count);
            count += 5;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingWhileLoop() {
    int i = 69;
    int j;
    int count;
    printf("By Using While Loop ; \n");
    while (i >= 65) {
        count = i;
        j = 1;
        while (j <= 5) {
            printf("%c     ", count);
            count += 5;
            j++;
        }
        i--;
        printf("\n");
    }
    printf("\n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 69;
    int j;
    int count;
    printf("By Using Do While Loop ; \n");
    do {
        count = i;
        j = 1;
        do {
            j++;
            printf("%c     ", count);
            count += 5;
        } while (j <= 5);
        printf("\n");
        i--;
    } while (i >= 65);
    printf("\n");
    return 0;
}
