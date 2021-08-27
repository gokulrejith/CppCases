#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    float marks[2];
};

int main()
{
    int i, j;
    struct student stuarr[3];
    
    for (i = 0; i < 3; i++)
    {
        cin >> stuarr[i].name >> stuarr[i].rollno;
        for (j = 0; j < 2; j++)
        cin >> stuarr[i].marks[j];
        cout << "\n";
    }

        for (i = 0; i < 3; i++)
        {
            cout << stuarr[i].name << " " << stuarr[i].rollno << " ";
            for (j = 0; j < 2; j++)
                cout << stuarr[i].marks[j] << " ";
            cout << "\n";
        }
}