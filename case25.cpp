#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;
    for(i = n ; i >= 1 ; i--){
        for(j = n ; j >= i ; j--)
        {
            cout<<(char)(64 + j);
        }
        cout<<endl;
    }
}
// E
// ED
// EDC
// EDCB
// EDCBA