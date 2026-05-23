/*
         X
         X     X
         X     X     X
         X     X     X     X
         X     X     X     X     X
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
    int j ;
    cout<<"By Using For Loop : " << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
           cout<<"X     " ;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

