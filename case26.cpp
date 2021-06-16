#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2("Hello World");
    string s3(s2);
    string s4(5,'A');
    string s5(s2,6);
    string s6("Hello", 2);
    string s7("Hello", 2,3);
    cout<<"val of s1 "<<s1<<endl;
    cout<<"val of s2 "<<s2<<endl;
    cout<<"val of s3 "<<s3<<endl;
    cout<<"val of s4 "<<s4<<endl;
    cout<<"val of s5 "<<s5<<endl;
    cout<<"val of s6 "<<s6<<endl;
    cout<<"val of s7 "<<s7<<endl;
    
    return 0;
    }

// val of s1 
// val of s2 Hello World
// val of s3 Hello World
// val of s4 AAAAA
// val of s5 World
// val of s6 He
// val of s7 llo
