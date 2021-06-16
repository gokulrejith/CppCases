#include <iostream>
using namespace std;

int fun(int);
int main(){
    int k = 100, z;
    k = fun(k = fun(k = fun(k)));
    z = fun(z = fun(z = 900));
    cout<<"k = "<<k<<endl;
    cout<<"z = "<<z;
}
int fun(int k){
    k++;
    return k;
}
//103
//902
