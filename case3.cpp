#include <iostream>
using namespace std;

int check(int);
int main(){
    int k = 35, z;
    z = check(k);
    cout<<"z="<<z;
}
int check(int m){
    if(m>40)
    return !m++;
    else
    return !++m;
}
// 0