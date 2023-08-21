#include<iostream>
#define pi 3.1416
using namespace std;
class area
{
    public:
        area()
        {
            cout<<"Area calculation"<<endl;
        }
        area(int r)
        {
            cout<<"Area of the circle = "<<pi*r*r<<endl;
        }
        area(double r)
        {
            cout<<"Area of the square = "<<r*r<<endl;
        }
        area(double h,double w)
        {
            cout<<"Area of the rectangle = "<<h*w<<endl;
        }
        area(int h,int w)
        {
            cout<<"Area of the triangle = "<<0.5*h*w<<endl;
        }
};
int main()
{
    area aa;
    area circle(3);
    area square(3.0);
    area rectangle(5.0,6.0);
    area triangle(5,6);
    return 0;
}



