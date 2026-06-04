/*
      A
      B     A
      C     B     A
      D     C     B     A
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
    int end = 69;
    int iterator;
    int counter = 65;
    cout << "By Using For Loop : " << endl;
    for (start = 65; start <= end; start++) {
        counter = start;
        for (iterator = 65; iterator <= start; iterator++) {
            cout << (char) counter << "     ";
            counter--;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 65;
    int end = 69;
    int iterator;
    int counter = 65;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        iterator = 65;
        counter = start;
        while (iterator <= start) {
            cout << (char) counter << "     ";
            counter--;
            iterator++;
        }
        start++;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 65;
    int end = 69;
    int iterator;
    int counter = 65;
    cout << "By Using Do While Loop : " << endl;
    do {
        iterator = 65;
        counter = start;
        do {
            cout << (char) counter << "     ";
            iterator++;
            counter--;
        } while (iterator <= start);
        cout << endl;
        start++;
    } while (start <= end);
    cout<<endl;
    return 0;
}
