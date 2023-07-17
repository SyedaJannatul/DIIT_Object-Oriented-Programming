#include<iostream>
#define pi 3.1416
using namespace std;

class area
{
    public:
        area()
        {
            cout<<"To calculate area enter your choice ..."<<endl;
            cout<<"1.area of circle"<<endl<<"2.area of square"<<endl;
            cout<<"3.area of rectangle"<<endl<<"4.area of triangle"<<endl<<endl;
        }
        area(float r,int n)
        {
            if(n==1)
            {
                cout<<"Area of the circle = "<<pi*r*r<<endl;
            }
            else if(n==2)
            {
                cout<<"Area of the square = "<<r*r<<endl;
            }
            else
            {
                cout<<"wrong input."<<endl;
            }
        }
        area(float h,float w,int n)
        {
            if(n==3)
            {
                cout<<"Area of the rectangle = "<<h*w<<endl;
            }
            else if(n==4)
            {
                cout<<"Area of the triangle = "<<0.5*h*w<<endl;
            }
            else
            {
                cout<<"wrong input."<<endl;
            }
        }
};

int main()
{
    int n;
    float a,b,c,d;
    area aa;
    cout<<"Enter your choice :";
    cin>>n;
    if(n==1)
    {
        cout<<"Enter the radius in meter unit :";
        cin>>c;
        area circle(c,n);
    }
    else if(n==2)
    {
        cout<<"Enter the side in meter unit :";
        cin>>c;
        area square(c,n);
    }
    else if(n==3)
    {
        cout<<"Enter the height and width in meter unit :";
        cin>>c>>d;
        area rectangle(c,d,n);
    }
    else if(n==4)
    {
        cout<<"Enter the height and base in meter unit :";
        cin>>c>>d;
        area triangle(c,d,n);
    }
    else
    {
        cout<<"wrong input."<<endl;
    }
    return 0;
}
