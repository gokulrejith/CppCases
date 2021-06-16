#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;
    char ch1 = 'A', ch2 = 'a';
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++)
        {
            if(i%2==0)
            cout<<(char)(j+64);
            else
            cout<<(char)(j+96);
        }
        cout<<endl;
    }
}

//abcde
//ABCDE
//abcde
//ABCDE
//abcde