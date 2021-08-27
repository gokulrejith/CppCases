#include <iostream>
using namespace std;

long int factRec(long int);
long int fact(long int);

int main(){
    long int n;
    cin>>n;
    cout<<factRec(n)<<endl;
    cout<<fact(n);
    return 0;
}

long int factRec(long int n){
    if(n == 1 || n == 0)
    return n;
    else
    return n*factRec(n-1); //recursive
}

long int fact(long int n){
    long int mul = 1;
    long int k = n;
    for(k=n ; n > 0 ; n--)
     mul = mul * n;
     
    return mul;
}