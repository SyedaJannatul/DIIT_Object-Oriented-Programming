#include<iostream>
using namespace std;
class code
{
    int id;
    public:
        code(){};       //default constructor
        code(int a)     //constructor
        {
           id = a;
        }
        code(code &x)   //copy constructor
        {
           id = x.id;
        }
        int display()
        {
            return id;
        }
};
int main()
{
    code obj1(100);  //constructor called
    cout<<"id of obj1 : "<<obj1.display()<<endl;

    code obj2(obj1); //copy constructor called
    cout<<"id of obj2 : "<<obj2.display()<<endl;

    code obj3 = obj1; //copy constructor called
    cout<<"id of obj3 : "<<obj3.display()<<endl;

    code obj4;
    obj4 = obj1; //copy constructor called
    cout<<"id of obj4 : "<<obj4.display()<<endl;
    return 0;
}
