#include <iostream>
using namespace std;

int main() {
    int i, j, n = 5, ch1 = 0, ch2 = 0;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n ; j++)
        {
            if(i%2==0){
            cout<<(char)(ch1+65);
            ch1++;
            }
            else{
            cout<<(char)(ch2+97);
            ch2++;
            }
        }
        cout<<endl;
    }
}

//abcde
//ABCDE
//abcde
//ABCDE
//abcde