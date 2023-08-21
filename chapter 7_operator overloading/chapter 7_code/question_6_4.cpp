//overloading increment and decrement operator in prefix form using member function
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
    void operator++ ()  //using member function
    {
        ++n; // ++obj1.n;
    }
    code operator-- ()  //using member function
    {
        code obj;
        obj.n = this->n - 1;
        return obj;
    }
    void display()
    {
        cout<<"After increment : "<<n<<endl;
    }

};

int main()
{
    code obj1(23);
    ++obj1;
    obj1.display();

    code obj3,obj2(100);
    obj3 = --obj2;
    obj3.display();
    return 0;
}
