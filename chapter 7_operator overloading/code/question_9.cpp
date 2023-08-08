#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class polar
{
    float radius, angle ,x,y;
public:
    polar(){};
    polar (float r, float a)
    {
        radius = r;
        angle = a;
        a = a *(M_PI / 180); //converting degree to radian
        x = radius * cos(a);
        y = radius * sin(a);
    }
    void display()
    {
        cout<<"\tIn polar co-ordinate system (r,a) = ( "<<radius<<" unit , "<<angle<<" degree )"<<endl;
        cout<<"\tIn cartesian  co-ordinate system (x,y)= ( "<<x<<" , "<<y<<" )"<<endl;
    }
    polar operator+ (polar c2)
    {
        polar temp;
        temp.x = x + c2.x;
        temp.y = y + c2.y;
        temp.angle = atan(temp.y/temp.x);
        temp.angle = temp.angle *(180 / M_PI); //   converting radian to degree
        temp.radius = sqrt((temp.x * temp.x)+(temp.y * temp.y));
        return temp;
    }
};

int main()
{
    polar c3,c2,c1;
    float r1,r2,a1,a2;
    cout<<"Enter 1st point radius r & angle a(in degree) = ";
    cin>>r1>>a1;
    c1 = polar(r1,a1);
    cout<<"Enter 2nd point radius r & angle a(in degree) = ";
    cin>>r2>>a2;
    c2 = polar(r2,a2);
    cout<<"\n";
    cout<<"First point value : "<<endl;
    c1.display();
    cout<<"Second point value : "<<endl;
    c2.display();
    cout<<"\n";
    c3 = c1 + c2;
    cout<<"After sum operation resultant point value = "<<endl;
    c3.display();

    return 0;
}

