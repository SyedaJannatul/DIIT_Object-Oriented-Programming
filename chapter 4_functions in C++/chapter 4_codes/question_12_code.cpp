#include<iostream>
#include<math.h>
#include <iomanip>
#define accuracy 0.0001
using namespace std;

double series()
{
    int i;
    double f,temp = 0.0,sum = 0.0,p = 2.0;

    for (i = 1; ; i++)
    {
        f = 1.0/i;
        temp = pow(f,p);  //double pow(double,double);
        sum = sum + temp;
        if(temp<=accuracy)
            break;
        temp = 0.0;
    }
    cout<<"No. of terms n = "<<i<<endl;
    return sum;
}

int main()
{
    double s;
    s = series();
    cout<<"Sum = ";
    std::cout << std::fixed << std::setprecision(6) << s;
    return 0;
}

