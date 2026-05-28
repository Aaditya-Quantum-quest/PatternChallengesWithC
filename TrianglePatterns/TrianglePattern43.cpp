/*
      1
      3     5
      5     7     9
      7     9   11   13
      9   11   13   15   17
 */

#include <iostream>
using namespace std;

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int k;
    cout << "By Using For Loop : " << endl;
    for (i = 1; i <= 5; i++) {
        k = (2 * i) - 1;
        for (j = 1; j <= i; j++) {
            if (k <= 9) {
                cout << "  ";
            }
            cout << k << "  ";
            k += 2;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    int k;
    cout << "By Using While Loop : " << endl;
    while (i <= 5) {
        k = (2 * i) - 1;
        j = 1;
        while (j <= 5) {
            cout << k << "  ";
            k += 2;
            j++;
        }
        i++;
        cout << endl;
    }
    cout << endl;
    return 0;
}


