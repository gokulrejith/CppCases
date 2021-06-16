#include <iostream>
using namespace std;

int main() {
    int x;
    string s1 = "ab cd ef ab cd ef gh";
    x = s1.find("ef g");
    cout<<"\"ef g\" is found at index:  "<<x<<endl;
}
//returns -1 if not found