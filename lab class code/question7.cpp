#include<iostream>
using namespace std;

class A
{

    public:
        int n;

        int num1_get()
        {
            cout<<"Enter a number for class A : ";
            cin>>n;

            return n;
        }
};
class B
{

    public:
        int n;

        int num2_get()
        {
            cout<<"Enter a number for class B : ";
            cin>>n;

            return n;
        }
};
int main()
{
    A a;
    B b;

    int m,p;
    m = a.num1_get();
    p = b.num2_get();

    if(m > p)
    {
        cout<<"Class A number is greater than Class B number."<<endl;
    }
    else if(m < p)
    {
        cout<<"Class B number is greater than Class A number."<<endl;
    }
    else
    {
        cout<<"Class A number is equal to Class B number."<<endl;
    }

    return 0;
}

