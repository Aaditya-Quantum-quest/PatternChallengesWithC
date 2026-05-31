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
    UsingWhileLoop();
    UsingDoWhileLoop();
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
    int start = 1;
    int end = 5;
    int iterator;
    int counter = 1;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        counter = start;
        iterator = 1;
        while (iterator <= start) {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "    ";
            counter = counter + start;
            iterator = iterator + 1;
        }
        start += 1;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 1;
    int end = 5;
    int iterator;
    int counter = 1;
    cout << "By Using Do While Loop : " << endl;
    do {
        counter = start;
        iterator = 1;
        do {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "    ";
            counter = counter + start;
            iterator += 1;
        } while (iterator <= start);
        cout << endl;
        start += 1;
    } while (start <= end);
    cout << endl;
    return 0;
}
