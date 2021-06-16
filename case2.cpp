#include <iostream>
using namespace std;

int fun(int x){
    if(x==1 || x==0)
    return 1;
    if(x%2 == 0)
    return fun(x/2) + 2;
    else
    return fun(x-1) + 3;
}

int main(){
    cout<<fun(7);
    return 0;
}
// 11