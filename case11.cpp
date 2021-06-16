#include <iostream>
using namespace std;

int check(int);

int main(){
    int i =45;
    float c;
    c = check(i);
    cout<<"c= "<<c;
    return 0;
}

int check(int ch){
    if(ch >= 45)
    return 3.14;
    else
    return 6.28;
}
//Will print only 3 as return type is int.