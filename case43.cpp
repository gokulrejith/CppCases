#include <iostream>
using namespace std;

int main(){
    struct employee{
        char *name;
        int age;
    }e[2];

    for(int i = 0 ; i <= 1 ; i++){
        e[i].name = "Ram";
        e[i].age  = 25;
    }
    for(int i = 0 ; i <= 1 ; i++){
        cout<<e[i].name<<" "<<e[i].age<<endl;
    }
}
