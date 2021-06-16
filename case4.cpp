#include <iostream>
using namespace std;

int addsub(int, int);
int main(){
 int i = 10, j = 20, k;
 k = addsub(i,j);
 cout<<"k="<<k;
}

int addsub(int a, int b){
    int x,y;
    x = a-b;
    y = a+b;
    return x,y; //Cannot return multiple output in one return statement. only returns value of x.
    //Multiple return possible only in python.
}