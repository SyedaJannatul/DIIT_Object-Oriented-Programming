#include<iostream>
using namespace std;
class parent
{
public:
    void display()
    {
        cout<<"display from parent class"<<endl;
    }
};
class child:public parent
{
public:
    void display()
    {
        cout<<"display from child class"<<endl;
    }
};
int main()
{
    child obj;
    obj.display();
    obj.parent::display();
    return 0;
}
