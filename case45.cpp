#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    float marks;
};
int main()
{
    int i;
    struct student stuarr[3];
    for (i = 0; i < 3; i++)
        cin >> stuarr[i].name >> stuarr[i].rollno >> stuarr[i].marks;
    cout << "\n";
    for (i = 0; i < 3; i++)
        cout << stuarr[i].name <<" "<< stuarr[i].rollno <<" "<< stuarr[i].marks<<endl;
}