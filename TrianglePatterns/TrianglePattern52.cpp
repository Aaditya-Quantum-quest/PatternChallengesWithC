/*
     5
     9     4
   12     8     3
   14   11     7     2
   15   13   10     6     1
 */

#include<iostream>
using namespace std;

int UsingForLoop();

int UsingWhileLoop();

int UsingDoWhileLoop();

int main() {
    UsingForLoop();
    return 0;
}

int UsingForLoop() {
    int start = 5;
    int end;
    int iterator;
    int counter = 0;
    int k = 0;
    cout << "By Using For Loop : " << endl;
    for (start = 5; start >= 1; start--) {
        counter += start;
        k = counter;
        for (iterator = 5; iterator >= start; iterator--) {
            if (counter <= 9) {
                cout << "  ";
            }
            cout << counter << "     ";
            counter = counter - iterator;
        }
        counter = k;
        cout << endl;
    }
    cout << endl;
    return 0;
}
