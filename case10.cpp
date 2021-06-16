#include <iostream>
using namespace std;

int check(int);

int main(){
    int i = 45;
    int c = 0;
    c = check(i); // Garbage value
    cout<<"c= "<<c;
    return 0;
}

int check(int ch){
    cout<<"What is this?";
}
