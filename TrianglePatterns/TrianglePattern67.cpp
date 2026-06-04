/*
       E
       E     D
       E     D     C
       E     D     C     B
       E     D     C     B     A
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
    cout << "By Using For Loop : " << endl;
    for (start = 69; start >= end; start--) {
        for (iterator = 69; iterator >= start; iterator--) {
            cout << (char) iterator << "     ";
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
    cout << "By Using While Loop : " << endl;
    while (start >= end) {
        iterator = 69;
        while (iterator >= start) {
            cout << (char) iterator << "     ";
            iterator--;
        }
        start--;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 70;
    int end = 66;
    int iterator;
    cout << "By Using Do While Loop : " << endl;
    do {
        iterator = 70;
        do {
            iterator--;
        cout << (char) iterator << "     ";
        }while (iterator >= start);
        start--;
        cout << endl;
    }while (start >= end);
    cout << endl;
    return 0;
}