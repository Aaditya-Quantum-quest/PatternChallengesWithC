/*
           1
           3     5
           7     9     11
         13   15     17     19
         21   23     25     27     29

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
    int start;
    int end = 5;
    int j;
    int count = 1;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        for (j = 1; j <= start; j++) {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count << "    ";
            count = count + 2;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 1;
    int end = 5;
    int j;
    int count = 1;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        j=1;
        while (j <= start) {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count << "    ";
            count = count + 2;
            j++;
        }
        cout << endl;
        start = start + 1;
    }
    cout << endl;
    return 0;
}


int UsingDoWhileLoop() {
    int start = 1;
    int end = 5;
    int j;
    int count = 1;
    cout << "By Using Do While Loop : " << endl;
    do {
        j = 1;
        do {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count << "    ";
            count = count + 2;
            j++;
        } while (j <= start);
        cout << endl;
        start += 1;
    } while (start <= end);
    cout << endl;
    return 0;
}
