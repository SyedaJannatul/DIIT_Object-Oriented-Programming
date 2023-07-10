#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

float dg_rd(int x);
int factorial(int f);

float dg_rd(float x)
{
    float r;
    r=x*(M_PI/180);
    return r;
}
int factorial(int f)
{
    int temp=1,j=2;
    while(j<=f)
    {
        temp=temp*j;
        j++;
    }
    return temp;
}

int main()
{
    int i,sign,k=1,f,n;
    float x,x1,x2,sum=0.0,term;

    cout<<"Enter an angle in degree : ";
    cin>>x1;
    x2=x1;
    x=dg_rd(x2);
    cout<<"Enter the nth term : ";
    cin>>n;

    for(i=1;;i=i+2)
    {
       if(k%2==0)
       {
           sign=-1;
       }
       else
       {
           sign=1;
       }
       f=factorial(i);
       term=(pow(x,i))/f;
       sum=sum+(sign*term);

       if(k==n)
        break;

       f=0;
       term=0.0;
       k++;
    }
    std::cout<<std::setprecision(6)<<"Using Taylor's series ,upto "<<n<<"th term sin( "<<x1<<" ) : "<<sum<<endl;
    cout<<"Using built-in function , sin( "<<x1<<" ) : "<<sin(x)<<endl;//radian value i.e. sin(2.0944) for sin(120*)
    return 0;
}

/*test case
sin 120 degree = sin 2.0944 radian = 0.86602540378
*/
