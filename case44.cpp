#include <iostream>
using namespace std;

int main(){
    struct student{
        string name;
        int rollno;
        float marks;
    };

    struct student stu1 = {"Ram", 121, 90}, stu2, stu3;
    stu2 = stu1;
    stu3.name = "Sam";
    stu3.rollno = 152;
    stu3.marks = 60;
    cout<<stu1.name<<" "<<stu1.rollno<<" "<<stu1.marks<<"\n";
    cout<<stu2.name<<" "<<stu2.rollno<<" "<<stu2.marks<<"\n";
    cout<<stu3.name<<" "<<stu3.rollno<<" "<<stu3.marks<<"\n";

}