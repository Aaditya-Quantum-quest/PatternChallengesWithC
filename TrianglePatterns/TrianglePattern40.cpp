/*
       2
       2     4
       2     4     6
       2     4     6     8
       2     4     6     8     10
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
    cout << "By Using For Loop" << endl;
    for (i = 1; i <= 5; i++) {
        count = 2;
        for (j = 1; j <= i; j++) {
            cout << count << "     ";
            count += 2;
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
    cout << "By Using While Loop" << endl;
    while (i <= 5) {
        j = 1;
        count = 2;
        while (j <= i) {
            cout << count << "     ";
            count += 2;
            j++;
        }
        i++;
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int i = 1;
    int j;
    int count;
    cout << "By Using Do While Loop" << endl;
    do {
        j = 1;
        count = 2;
        do {
            j++;
            cout << count << "     ";
            count += 2;
        }while (j <= i);
        i++;
        cout<<endl;
    }while (i<=5);
    cout << endl;
    return 0;
}
