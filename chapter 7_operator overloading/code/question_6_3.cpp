//unary operator using friend function
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
        //declaring friend function for
        //unary operator overloading
        friend void operator- (code &);

        void display()
        {
            cout<<a<<endl;
        }
};
//defining friend function for unary operator overloading
void operator- (code &cd)
{
    cd.a = -cd.a;
}
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

