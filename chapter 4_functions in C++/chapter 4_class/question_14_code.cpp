#include<iostream>
#include<math.h>
#include <iostream>
#include <iomanip>
#define accuracy 0.0001
using namespace std;
double factorial(int num)
{
    int j;
    double fac = 1;
    for(j = 1; j <= num; j++)
    {
        fac = fac * j;
    }
    return fac;
}
int signcalc(int theta)
{
    int s;
    if(theta>360)
    {
        theta = theta%360;
    }

    if(theta=>0 && theta<=180)
    {
        s=1;
    }
    else if(theta>180 && theta<=360)
    {
        s=-1;
    }
    else
        s=-1;
    return s;
}
float calc(float x,int s)
{
    int i, sign;
    float temp=0.0, sum=0.0;
    sign = s;
    for(i = 1; ; i += 2)
    {
        temp = sign * pow(x,i) / factorial(i);
        sum = sum + temp;
        if(temp<=accuracy)
            break;
        temp = 0.0;
        sign = sign *(-1);
    }
    cout<<"No. of terms n = "<<i<<endl;
    return sum;
}
int main()
{
    int si,deg;
    float radian, result;
    cout<<"Enter value of angle(x) in degrees : ";
    cin>>deg;
    radian = deg * (3.14159 / 180.0); // Convert from degree to radian
    si = signcalc(deg);
    result = calc(radian,si);
    cout<<"sin("<<deg<<") = ";
    std::cout << std::fixed << std::setprecision(6) << result;
    return 0;
}

/* sin 125 degree = sin 2.182 radian = 0.8192*/

