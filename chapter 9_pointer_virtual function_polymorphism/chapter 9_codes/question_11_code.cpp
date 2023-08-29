#include<iostream>
#include<math.h>
using namespace std;

class shape //base class
{
public:
    virtual void print()=0;
};

class rectangle:public shape
{
private:
    float length,width;
public:
    void area(float l,float w)
    {
        length = l;
        width = w;
    }
    void print()
    {
        cout<<"Area of rectangle is = "<<length*width<<endl;
    }
};

class cube:public rectangle
{
private:
    float height;
public:
    void volume(float h)
    {
        height = h;
    }
    void print()
    {
        cout<<"Volume of cube is = "<<pow(height,3)<<endl;
    }
};
int main()
{
    cube c_obj;

    c_obj.area(5,8);
    c_obj.rectangle::print();

    c_obj.volume(2);
    c_obj.print();

    return 0;

}
