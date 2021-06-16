#include <iostream>
using namespace std;

int add(int);
int main(){
    int i = 3,k,l;
    k = add(++i); //i = 4, k = 5
    l = add(i++); //i = 5, but passes 4 as argument
    cout<<"i="<<i<<" k="<<k<<" l="<<l;
    return 0;
}

int add(int ii){
    ++ii;
    return ii;
}
//5 5 5 
   