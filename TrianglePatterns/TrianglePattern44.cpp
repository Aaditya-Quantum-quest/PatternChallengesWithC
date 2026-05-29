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
    return 0;
}

int UsingForLoop() {
    int i;
    int j;
    int num = 5;
    int count = 0;
    cout << "By Using For Loop : " << endl;
    for (int i = 1; i <= num; i++) {
        count = count + i;
        for (j = count; j > count - i; j--) {
            if (j <= 9) {
                cout<< "  ";
            }
                cout << j << "     ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
