/*
   Sum Of n Numbers
 */

#include <iostream>
using namespace std;

int SumOfNumbers(int k);

int main() {
    int k;
    cout << "Enter a number : " << endl;
    cin >> k;
    cout << SumOfNumbers(k);
    return 0;
}

int SumOfNumbers(int k) {
    if (k == 0) {
        return 0;
    }

    return k + SumOfNumbers(k - 1);
}
