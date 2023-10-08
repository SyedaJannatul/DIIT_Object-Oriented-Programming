#include<iostream>
using namespace std;

//single parameter
template<typename T>

T add(T a,T b)
{
    return (a+b);
}
template<typename T1,typename T2>

void sum(T1 a,T2 b)
{
    cout<<(a+b);
}

int main()
{
    int m,n;
    float x,y;
    string p,s;
//single parameter
    cout<<"Enter two integer numbers :";
    cin>>m>>n;
    cout<<"After addition of integer = "<<add<int>(m,n);
    cout<<endl;

    cout<<"\nEnter two float numbers :";
    cin>>x>>y;
    cout<<"After addition floats = "<<add<float>(x,y);
    cout<<endl;

    cout<<"\nEnter two strings :";
    cin>>p>>s;
    cout<<"After concatenation of strings = "<<add<string>(p,s);
    cout<<endl;

//double parameter
    cout<<"\nEnter two numbers (integer + float) :";
    cin>>m>>x;
    cout<<"After addition of integer + float = ";
    sum<int,float>(m,x);
    cout<<endl;

    cout<<"\nEnter a string :";
    cin>>p;
    cout<<"After concatenation a string = ";
    sum<string,string>("name -> ",p);
    cout<<endl;
    return 0;
}
