#include <iostream>
using namespace std;

int i = 200;
int main(){
    int i = 100;
    cout<<i<<endl;
    {
        int i = 1;
        cout<<i<<endl;
        {
            i += 1;
            cout<<i<<endl;
        }
        cout<<i<<endl;
    }
    cout<<i<<endl;
    return 0;
}
// 100  1   2   2   100