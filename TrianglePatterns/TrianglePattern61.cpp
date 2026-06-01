/*
         1
         1     0
         1     0     1
         1     0     1     0
         1     0     1     0     1
 */

#include<iostream>
using namespace std;

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    UsingWhileLoop();
    return 0;
}

int UsingForLoop() {
    int start;
    int end = 5;
    int iterator;
    int counter;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        counter = 1;
        for (iterator = 1; iterator <= start; iterator++) {
            if (counter == 1) {
                cout << counter << "     ";
                counter--;
            } else {
                cout << counter << "     ";
                counter++;
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}


int UsingWhileLoop() {
    int start = 1;
    int end = 5;
    int iterator = 1;
    int counter;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        counter = 1;
        iterator = 1;
        while (iterator <= start) {
            if (counter == 1) {
                cout << counter << "     ";
                counter--;
            } else {
                cout << counter << "     ";
                counter++;
            }
            iterator++;
        }
        start++;
        cout << endl;
    }
    cout << endl;
    return 0;
}
