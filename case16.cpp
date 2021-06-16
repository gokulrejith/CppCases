#include <iostream>
using namespace std;

int main() {
    int x;
    string s1 = "ab cd ef ab cd ef gh";
    for(int i = 0 ; i < s1.size() ; i++){
        cout<<s1[i];
        cout<<s1.at(i);//Same function as above
    };
}
//aabb  ccdd  eeff  aabb  ccdd  eeff  gghh