#include <iostream>
using namespace std;

void message (void);
int main(){
    void message();
    int c = 100;
    cout<<"c = "<<c;
    c = message();
    cout<<"c = "<<c;
}
void message(){
    cout<<"Attention";
}
//Compile time error