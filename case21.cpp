#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5;
    char ch1 = 'A', ch2 = 'a';
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++)
        {
            if(i%2==0)
            cout<<ch2++;
            else
            cout<<ch1++;
        }
        cout<<endl;
    }
}

//ABCDE
//abcde
//FGHIJ
//fghij
//KLMNO