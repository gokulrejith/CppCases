#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    float marks[2];
};

void display(string n , int r , float m){
    cout<<n<<" "<<r<<" "<<m;
    cout<<"\n";
}
int main()
{
    int i, j;
    struct student stuarr[3];

    for(i = 0 ; i < 3 ; i++)
    cin>>stuarr[i].name>>stuarr[i].rollno>>stuarr[i].marks;
    cout<<"\n";

    for(i = 0 ; i < 3 ; i++)
    display(stuarr[i].name, stuarr[i].rollno, stuarr[i].marks);
}