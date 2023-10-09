#include<iostream>
using namespace std;

template<typename t1,typename t2, typename t3>

class record
{
    t1 a;
    t2 b;
    t3 c;
public:
    record(t1 x,t2 y,t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void stu_show()
    {
        cout<<"Student name = "<<a<<endl;
        cout<<"Student roll = "<<b<<endl;
        cout<<"Student marks = "<<c<<endl;
    }
    void tech_show()
    {
        cout<<"Techer name = "<<a<<endl;
        cout<<"Subject = "<<b<<endl;
        cout<<"Total students = "<<c<<endl;
    }
};
int main()
{
    int m,n;
    float p;
    string s,t,sb;

    cout<<"Enter student name : ";
    cin>>s;
    cout<<"Enter roll = ";
    cin>>m;
    cout<<"Enter total marks = ";
    cin>>p;
    cout<<"Enter teacher name = ";
    cin>>t;
    cout<<"Subject name = ";
    cin>>sb;
    cout<<"Total enrolled student = ";
    cin>>n;
    cout<<endl<<endl;

    record<string,int,float>student(s,m,p);
    student.stu_show();
    cout<<endl;

    record<string,string,int>teacher(t,sb,n);
    teacher.tech_show();
    return 0;
}
