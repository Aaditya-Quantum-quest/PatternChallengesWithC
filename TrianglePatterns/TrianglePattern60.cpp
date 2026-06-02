/*
        0
        1     1
        0     0     0
        1     1     1     1
        0     0     0     0     0
        1     1     1     1     1     1
    */

#include<iostream>
using namespace std;

int UsingWhileLoop();

int UsingDoWhileLoop();

int UsingForLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    return 0;
}

int UsingForLoop() {
    int start;
    int end = 6;
    int iterator;
    int counter = 0;
    cout << "By Using for Loop : " << endl;
    for (start = 1; start <= end; start++) {
        for (iterator = 1; iterator <= start; iterator++) {
            cout << counter << "    ";
        }
        if (counter == 0) {
            counter++;
        } else {
            counter--;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 1;
    int end = 6;
    int iterator;
    int counter = 0;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        iterator = 1;
        while (iterator <= start) {
            cout << counter << "    ";
            iterator++;
        }
        if (counter == 0) {
            counter++;
        } else {
            counter--;
        }
        cout << endl;
        start++;
    }
    cout << endl;
    return 0;
}
