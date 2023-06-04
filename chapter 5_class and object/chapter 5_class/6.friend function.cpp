#include<iostream>
using namespace std;

class B;//class declaration or forward declaration

class A
{
    private:
        int data;
    public:
        void getdata(int n)
        {
            data=n;
        }
        friend void add(A,B);//friend function declaration
};

class B
{
   private:
        int data;
    public:
        void getdata(int n)
        {
            data=n;
        }
        friend void add(A,B);//friend function declaration

};

void add(A obj1 , B obj2)//friend function definition
{
    cout<<"Summation = "<<obj1.data+obj2.data;
}

int main()
{

    A a;
    B b;
    int p,q;
    cout<<"Enter two numbers : ";
    cin>>p>>q;
    a.getdata(p);
    b.getdata(q);
    add(a,b);
    return 0;
}
