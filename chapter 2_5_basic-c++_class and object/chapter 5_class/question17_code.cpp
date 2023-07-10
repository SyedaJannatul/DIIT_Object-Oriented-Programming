#include<iostream>

using namespace std;

class B;//class declaration or forward declaration

class A
{
    private:
        int data_A;
    public:
        void getdata(int n)
        {
            data_A=n;
        }

        void display()
        {
            cout<<data_A<<endl;
        }

        friend void swapping(A &,B &);//friend function declaration
};

class B
{
   private:
        int data_B;
    public:
        void getdata(int n)
        {
            data_B=n;
        }

        void display()
        {
            cout<<data_B<<endl;
        }

        friend void swapping(A &,B &);//friend function declaration

};

void swapping(A &obj1 , B &obj2)//friend function definition
{
    int temp;
    temp = obj1.data_A;
    obj1.data_A = obj2.data_B;
    obj2.data_B = temp;
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

    cout<<endl;
    cout<<"Before exchange, value of class A data : ";
    a.display();
    cout<<"Before exchange, value of class B data : ";
    b.display();

    swapping(a,b);

    cout<<endl;
    cout<<"After exchange, value of class A data : ";
    a.display();
    cout<<"After exchange, value of class B data : ";
    b.display();

    return 0;
}

