#include<iostream>
using namespace std;
class area_cl
{
public:
    double height;
    double width;
};
class rectangle:public area_cl
{
private:
    double rec_area;
public:
    rectangle(){};
    rectangle(double h, double w)
    {
        height = h;
        width = w;
    }
    double area()
    {
        rec_area = height * width;
        return rec_area;
    }
};
class isosceles:public area_cl
{
private:
    double iso_area;
public:
    isosceles(){};
    isosceles(double h, double w)
    {
       height = h;
       width = w;
    }
    double area()
    {
        iso_area = 0.5 * height * width;
        return iso_area;
    }
};

int main()
{
    double h,w,area_r,area_t;
    rectangle r_obj;
    cout<<"Enter the height and weight of the rectangle : ";
    cin>>h>>w;
    r_obj = rectangle(h,w);
    area_r = r_obj.area();
    cout<<"Area of the rectangle :"<<area_r<<endl;

    isosceles t_obj;
    cout<<"Enter the height and base of the isosceles triangle : ";
    cin>>h>>w;
    t_obj = isosceles(h,w);
    area_t = t_obj.area();
    cout<<"Area of the isosceles triangle :"<<area_t<<endl;

    return 0;

}
