/*
        15
        14   13
        12   11   10
          9     8     7     6
          5     4     3     2     1
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
    int iterator;
    int end = 5;
    int counter = 15;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        for (iterator = 1; iterator <= start; iterator++) {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "     ";
            counter--;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 1;
    int iterator;
    int end = 5;
    int counter = 15;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        iterator = 1;
        while (iterator <= start) {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "     ";
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
    int start = 1;
    int iterator;
    int end = 5;
    int counter = 15;
    cout << "By Using Do While Loop : " << endl;
    do {
        iterator = 1;
        do {
            iterator ++;;
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "     ";
            counter--;

        }while (iterator <= start);
        cout<<endl;
        start++;
    }while (start <= end);
    cout << endl;
    return 0;
}