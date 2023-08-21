// we have two classes Y = time of DHAKA and X = time of Japan,Korea respectively and will convert one class (Y) to another (X) class.
//that means here we will convert the input time into the time of Japan,Korea
#include<iostream>
using namespace std;
class Y //Let the time of DHAKA :class Y
{
    int hr,mins;
public:
    Y(int x, int y)
    {
        hr = x;
        mins = y;
    }
    int hour()
    {
        return hr;
    }
    int minutes()
    {
        return mins;
    }
    void display()
    {
        cout<<hr<<"::"<<mins<<endl;
    }

};
class X //time of Japan,Korea :class X
{
    int hr,mins;
public:
    X(){};
    X(Y obj1)
    {
        hr = obj1.hour() + 3;
        mins = obj1.minutes();
    }
    void display()
    {
        cout<<hr<<"::"<<mins<<endl;
    }
};

int main()
{
    int h,m;
    cout<<"Enter time in hour(<=12) and minutes(<60) = ";
    cin>>h>>m;
    if((h<=12) && (m<=60))
    {
        X a;
        Y b(h,m);
        cout<<"Entered Time = ";
        b.display();
        a = b; //one class to another class type conversion
        cout<<"Time of Japan,Korea = ";
        a.display();
    }
    else
        cout<<"wrong input";

    return 0;
}
