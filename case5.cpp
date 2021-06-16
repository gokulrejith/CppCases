#include <iostream>
using namespace std;

int fun(int, int);
int main(){
int p = 100, f = 200;
fun(p,f);
cout<<"p = "<<p<<"f= "<<f;
}
int fun(int x, int y){
    x += 1;
    y += 1;
    return x;
    return y;
}

