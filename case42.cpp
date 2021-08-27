#include <iostream>
using namespace std;

int main(){
    struct employee{
        char name[20];
        int age;
        float rating;
    };

    struct employee e = {"Ram", 30, 20.5};
    cout<<e.name<<" "<<e.age<<" "<<e.rating;//Ram 30 20.5
}
//If not initialized, we get garbage values.