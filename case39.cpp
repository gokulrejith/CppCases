#include <iostream>
using namespace std;

void fun(string &);
int main(){
    int x;
    string s1 = "ab ce";
    string s2 = "ab cd";
    fun(s1);
    return 0;
    }

void fun(string &s1){
    cout<<s1;
}