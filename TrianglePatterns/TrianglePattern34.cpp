/*
         X
         X     X
         X     X     X
         X     X     X     X
         X     X     X     X     X
 */


#include <iostream>
using namespace std;

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
    cout << "By Using For Loop : " << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << "X     ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    cout << "By Using While Loop : " << endl;
    while (i <= 5) {
        j = 1;
        while (j <= i) {
            cout << "X     ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    cout << "By Using Do While Loop : " << endl;
    do {
        j = 1;
        do {
            cout << "X     ";
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= 5);
    cout << endl;
    return 0;
}
