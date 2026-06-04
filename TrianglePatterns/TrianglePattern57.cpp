/*     fibonacci Series
            1
            1       2
            3       5       8
          13     21     34     55
          89   144   233   377   610
 */

#include <iostream>
using namespace std;

int UsingWhileLoop();

int UsingForLoop();

int UsingDoWhileLoop();

int FibonacciSeries(int iterator);

int main() {
    UsingForLoop();
    UsingWhileLoop();
    UsingDoWhileLoop();
    return 0;
}

int FibonacciSeries(int iterator) {
    int num1 = 0;
    int num2 = 1;
    int sumNum = 0;
    // Main Logic
    while (iterator != 0) {
        sumNum = num1 + num2;
        // cout << sumNum << "  ";
        num2 = num1;
        num1 = sumNum;
        iterator--;
    }
    return sumNum;
}

int UsingForLoop() {
    int start;
    int end = 5;
    int iterator;
    int counter = 1;
    cout<<"By Using For Loop : " << endl;
    for (start = 1; start <= end; start++) {
        for (iterator = 1; iterator <= start; iterator++) {
            if (FibonacciSeries(counter) <= 9) {
                cout << "  ";
            }
            if (FibonacciSeries(counter) >= 100) {
                cout << "";
            }
            cout << FibonacciSeries(counter) << "     ";
            counter++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

int UsingWhileLoop() {
    int start = 1;
    int end = 5;
    int iterator;
    int counter = 1;
    cout << "By Using While Loop : " << endl;
    while (start <= end) {
        iterator = 1;
        while (iterator <= start) {
            if (FibonacciSeries(counter) <= 9) {
                cout << "  ";
            }
            if (FibonacciSeries(counter) >= 100) {
                cout << "";
            }
            cout << FibonacciSeries(counter) << "     ";
            iterator++;
            counter++;
        }
        cout << endl;
        start++;
    }
    cout << endl;
    return 0;
}

int UsingDoWhileLoop() {
    int start = 1;
    int end = 5;
    int iterator;
    int counter = 1;
    cout << "By Using Do While Loop : " << endl;
    do {
        iterator = 1;
        do {
            if (FibonacciSeries(counter) <= 9) {
                cout << "  ";
            }
            if (FibonacciSeries(counter) >= 100) {
                cout << "";
            }
            cout << FibonacciSeries(counter) << "     ";
            counter++;
            iterator++;
        } while (iterator <= start);
        start++;
        cout << endl;
    } while (start <= end);
    cout << endl;
    return 0;
}
