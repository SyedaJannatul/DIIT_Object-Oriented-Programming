#include<iostream>
using namespace std;

int area(int side)                  //area of square
{
    return (side*side);
}

int area(int lenght, int width)     //area of rectangle
{
    return (lenght*width);
}

float area(float radius)            //area of circle
{
    return (3.1416*radius*radius);
}

int main()
{
    int s,l,w;
    float r;
    cout<<"Enter the side of the square : ";
    cin>>s;
    cout<<"Area of the square : "<<area(s)<<endl<<endl;

    cout<<"Enter the length and width of the rectangle : ";
    cin>>l>>w;
    cout<<"Area of the rectangle : "<<area(l,w)<<endl<<endl;

    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<"Area of the circle : "<<area(r)<<endl<<endl;

    return 0;
}
