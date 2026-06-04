/*
      E
      D     D
      C     C     C
      B     B     B     B
      A     A     A     A     A
 */


#include<iostream>
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
    int end = 65;
    int iterator;
    int counter;
    cout << "By Using For Loop : " << endl;
    for (start = 69; start >= end; start--) {
        counter = start;
        for (iterator = 69; iterator >= start; iterator--) {
            cout << (char) counter << "     ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 69;
    int end = 65;
    int iterator;
    int counter;
    cout << "By Using While Loop : " << endl;
    while (start >= end) {
        counter = start;
        iterator = 69;
        while (iterator >= start) {
            cout << (char) counter << "     ";
            iterator--;
        }
        start--;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 69;
    int end = 65;
    int iterator;
    int counter;
    cout << "By Using Do While Loop : " << endl;
    do {
        counter = start;
        iterator = 69;
        do {
            cout << (char) counter << "     ";
            iterator--;
        } while (iterator >= start);
        cout << endl;
        start--;
    } while (start >= end);
    cout << endl;
    return 0;
}
