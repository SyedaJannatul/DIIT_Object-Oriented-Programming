#include<iostream>
using namespace std;
class add
{
    private:
        int a=10,b=20;
    public:
        add()
        {
            cout<<"From constructor: object initialized!!"<<endl;
            cout<<"Addition = "<<a+b<<endl;
        }
        ~add()
        {
            cout<<"From destructor: object becoming destroy....."<<endl;
        }
};
int main()
{
    add ad1;
    return 0;
}

