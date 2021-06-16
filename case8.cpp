#include <iostream>
using namespace std;

int functio(int,int);
int main(){
    int i = 135, a = 135, k;
    k = functio(!++i,!a++);//Passes 0, 0 as arguments, But value of i, a does not become 0.
    cout<<"i="<<i<<" a="<<a<<" k="<<k;
    return 0;
}

int functio(int j, int b){
    int c;
    c = j+b;
    return c;
}
   
