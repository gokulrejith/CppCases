#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;
    for(i = 0 ; i <= n ; i++){
        for(j = 0 ; j <= i ; j++)
        {
            cout<<(char)('A' + i);
        }
        cout<<endl;
    }
}

// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF