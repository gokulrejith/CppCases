#include <iostream>
using namespace std;

int main(){
    int a = 12, i = 0;
    while(a >>= i)
    {
        cout<<"a="<<a<<" "<<"i="<<i<<endl;
        i++;
    }
    return 0;

}