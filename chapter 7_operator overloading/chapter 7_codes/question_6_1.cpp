//unary operator using member function -1
#include<iostream>
using namespace std;
class code
{
        int a;
    public:
        code(int x)
        {
            a=x;
        }
        void operator- ()   //unary operator overloading
        {                    //as member function
           a = -a;
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

    -obj1;
    cout<<"After unary operator overloading : ";
    obj1.display();
    return 0;
}

