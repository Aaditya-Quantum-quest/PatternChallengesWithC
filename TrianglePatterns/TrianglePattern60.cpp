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
    return 0;
}

int UsingForLoop() {
    int start;
    int end = 5;
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
