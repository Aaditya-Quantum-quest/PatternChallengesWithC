/*
    Factorial Of a Givern Number
 */

#include <iostream>
using namespace std;

int Fact(int k);

int main() {
    int k;
    int result;
    cout << "Enter a Number : ";
    cin >> k;
    result = Fact(k);
    cout << "The Factorial is :" << result << endl;
    return 0;
}

int Fact(int k) {
    if (k == 1 || k == 0) {
        return 1;
    };
    k = k * Fact(k - 1);
    return k;
}
