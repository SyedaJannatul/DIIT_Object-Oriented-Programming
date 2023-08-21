//overloading increment and decrement operator in prefix friend function
#include<iostream>
using namespace std;

class code
{
    int n;
public:
    code(){};
    code(int a)
    {
        n = a;
    }

    friend code operator++ (code &);  //friend function declaration
    friend code operator-- (code &);  //friend function declaration
    void display()
    {
        cout<<"After increment : "<<n<<endl;
    }

};
code operator++ (code &ob)  //friend function definition
{
    ++ob.n;
    return ob;
}

code operator-- (code &ob)  //friend function definition
{
    code obj;
    obj.n = ob.n - 1;
    return obj;
}

int main()
{
    code obj1(25);
    ++obj1;
    obj1.display();

    code obj3,obj2(100);
    obj3 = --obj2;
    obj3.display();

    return 0;
}
