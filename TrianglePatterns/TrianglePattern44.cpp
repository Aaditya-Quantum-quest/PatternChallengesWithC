/*
        1
        3     2
        6     5     4
      10     9     8     7
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
    int start;
    int num = 4;
    int count = 0;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= num; start++) {
        count = count + start;
        for (j = count; j > count - start; j--) {
            if (j <= 9) {
                cout << "  ";
            }
            cout << j << "     ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int i;
    int j;
    int start = 1;
    int num = 4;
    int count = 0;
    cout << "By Using While Loop : " << endl;
    while (start <= num) {
        count = count + start;
        j = count;
        while (j > count - start) {
            if (j <= 9) {
                cout << "  ";
            }
            cout << j << "     ";
            j--;
        }
        start = start + 1;
        cout << endl;
    }
    cout << endl;
    return 0;
}


int UsingDoWhileLoop() {
    int j;
    int start = 1;
    int num = 4;
    int count = 0;
    cout << "By Using Do While Loop : " << endl;
    do {
        count = count + start;
        j = count;
        do {
            if (j <= 9) {
                cout << "  ";
            }
            cout << j << "     ";
            j--;
        } while (j > count - start);
        cout << endl;
        start = start + 1;
    } while (start <= num);;
    cout << endl;
    return 0;
}
