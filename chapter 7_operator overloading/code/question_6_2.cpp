//unary operator using member function - 2
#include<iostream>
using namespace std;

class code
{
        int a;
    public:
        code(){};
        code(int x)
        {
            a=x;
        }
        code operator- ()   //unary operator overloading as member function
        {
           code obj_cd(-a);
           return obj_cd;
        }
        void display()
        {
            cout<<a<<endl;
        }
};

int main()
{
    code obj1(6);
    cout<<"Before unary operator overloading : ";
    obj1.display();

    code obj2;
    obj2 = -obj1;
    cout<<"After unary operator overloading : ";
    obj2.display();

    return 0;
}

