/*
          2
          4     6
          8   10     12
        14   16     18     20
        22   24     26     28     30
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
    int count = 2;
    int j;
    cout << "By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        for (j = 1; j <= start; j++) {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count <<"    ";
            count += 2;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 1;
    int end = 5;
    int count = 2;
    int j;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        j = 1;
        while (j <= start) {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count << "    ";
            count += 2;
            j++;
        }
        start++;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 1;
    int end = 5;
    int count = 2;
    int j;
    cout << "By Using Do While Loop : " << endl;
    do {
        j = 1;
        do {
            if (count <= 9) {
                cout << "  ";
            }
            cout << count << "    ";
            count += 2;
            j++;
        } while (j <= start);
        start++;
        cout << endl;
    } while (start <= end);
    cout << endl;
    return 0;
}
