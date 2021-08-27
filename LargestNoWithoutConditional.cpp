#include <iostream>
using namespace std;

int Greatest(int, int);

int main(){
    int n,m;
    cin>>n>>m;
    cout<<Greatest(n,m);
    return 0;
}

int Greatest(int a, int b){
    return a * bool(a/b) + b * bool(b/a);
}

//Does not work for -43 and 43