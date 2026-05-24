/*
        1
        2     3
        3     4     5
        4     5     6     7
        5     6     7     8     9
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
    int i;
    int j;
    int count;
    cout << "By Using For Loop : " << endl;
    for (i = 1; i <= 5; i++) {
        count = i;
        for (j = 1; j <= i; j++) {
            cout << count << "     ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i = 1;
    int j;
    int count;
    cout << "By Using While Loop : " << endl;
    while (i <= 5) {
        count = i;
        j = 1;
        while (j <= i) {
            cout << count << "     ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    int count;
    cout << "By Using Do While Loop : " << endl;
    do {
        count = i;
        j = 1;
        do {
            j++;
            cout << count << "     ";
            count++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= 5);
    cout << endl;
    return 0;
}
