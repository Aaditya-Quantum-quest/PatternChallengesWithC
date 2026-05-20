# include <stdio.h>

/*  x   x   x   x   x
 *  x   x   x   x   x
 *  x   x   x   x   x
 *  x   x   x   x   x
 *  x   x   x   x   x
 */

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
    int i, j;
    printf("By Using For Loop  \n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("x   ");
        }
        printf("\n");
    }
    printf("\n \n");
    return 0;
}

int UsingWhileLoop() {
    int i = 0;
    int j;
    printf("By Using While Loop \n");
    while (i < 5) {
        j = 0;
        while (j < 5) {
            printf("x   ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n \n");
    return 0;
}

int UsingDoWhileLoop() {
    int i = 0;
    int j;
    printf("By Using Do While Loop ");
    do {
        i++;
        j = 0;
        printf("\n");
        do {
            j++;
            printf("x   ");
        } while (j < 5);
    } while (i < 5);
    return 0;
}
