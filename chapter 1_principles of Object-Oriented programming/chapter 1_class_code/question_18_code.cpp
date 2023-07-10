#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,n;
    double f,temp = 0.0,sum = 0.0,p = 2.0;

    cout<<"Enter the no. of terms :";
    cin>>n;
    for (i = 1; i<=n ; i++)
    {
        f = 1.0/i;
        temp = pow(f,p);  //double pow(double,double);
        sum = sum + temp;
        temp = 0.0;
    }
    cout<<"Sum of the series upto "<<n<<"th terms = ";
    std::cout << std::fixed << std::setprecision(6) << sum<<endl;
    return 0;
}

