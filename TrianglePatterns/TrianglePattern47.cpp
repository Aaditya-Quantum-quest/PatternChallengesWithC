/*
       1
       2     4
       3     6     9
       4     8   12   16
       5   10   15   20   25
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
    int start;
    int end = 5;
    int iterator;
    int counter;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        counter = start;
        for (iterator = 1; iterator <= start; iterator++) {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "    ";
            counter = counter + start;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start;
    int end = 5;
    int iterator;
    int counter;

    return 0;
}