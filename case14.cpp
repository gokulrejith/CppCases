#include <iostream>
using namespace std;

int main() {
    int x;
    string s1 = "ab cd ef ab cd ef gh";
    x = s1.find_first_of("a");
    cout<<"\"a\" is found first at index: "<<x<<endl;
    x = s1.find_last_of("e");
    cout<<"\"e\" is found last at index:  "<<x<<endl;
}
//returns -1 if not found