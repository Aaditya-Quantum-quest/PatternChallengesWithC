/*
        5
        4     5
        3     4     5
        2     3     4     5
        1     2     3     4     5
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
    int i;
    int j;
    int count;
    cout << "By Using For Loop : " << endl;
    for (i = 5; i >= 1; i--) {
        count = i;
        for (j = 5; j >= i; j--) {
            cout << count << "     ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i = 5;
    int j;
    int count;
    cout << "By Using While Loop : " << endl;
    while (i >= 1) {
        count = i;
        j = 1;
        while (j >= i) {
            cout << count << "     ";
            count++;
            j--;
        }
        i--;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int i = 5;
    int j;
    int count;
    cout << "By Using Do While Loop : " << endl;
    do {
        j = 5;
        count = i;
        do {
            j--;
            cout << count << "     ";
            count++;
        } while (j >= i);
        cout << endl;
        i--;
    } while (i >= 1);
    cout << endl;
    return 0;
}
