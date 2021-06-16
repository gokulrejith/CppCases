#include <iostream>
using namespace std;

int main() {
    int x;
    string s1 = "ab cd ef ab cd ef gh";
    string s2 = "cd ef";
    x = s1.compare(6,2,s2,3,2); //Compares 2 characters from index position 6 of s1 and 3 of s2 and returns 0 if equal.
    if(x==0)
    s1.swap(s2);
    cout<<s1;
    return 0;
}
//cd ef