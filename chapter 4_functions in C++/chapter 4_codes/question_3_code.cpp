#include<iostream>
#include<math.h>
using namespace std;

float value(float p, int n, float r = 0.15)
{
    float total,rate,temp;
    rate = 1+r;
    temp = pow(rate,n);
    total = p*temp;

    return total;
}

int main()
{
    float amount1,amount2;
    amount1=value(5000,5);
    amount2=value(10000,5,.30);

    cout<<"Amount_1 = "<<amount1<<endl;
    cout<<"Amount_2 = "<<amount2<<endl;

    return 0;
}



