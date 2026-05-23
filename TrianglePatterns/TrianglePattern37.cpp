/*
          5
          4     4
          3     3     3
          2     2     2     2
          1     1     1     1     1
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
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= i; j--) {
            cout << i << "     ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i = 5;
    int j;
    cout << "By Using While Loop : " << endl;
    while (i >= 1) {
        j = 5;
        while (j >= i) {
            cout << i << "     ";
            j--;
        }
        i--;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int i = 5;
    int j;
    cout << "By Using Do While Loop : " << endl;
    do {
        j = 5;
        do {
            j--;
            cout << i << "     ";
        } while (j >= i);
        cout << endl;
        i--;
    } while (i >= 1);
    cout << endl;
    return 0;
}
