#include<iostream>
#include<math.h>
#include<iomanip>
#define accuracy 0.0001
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
    int i,sign,k=1,f;
    float x,x1,x2,sum=0.0,term;

    cout<<"Enter an angle in degree : ";
    cin>>x1;
    x2=x1;
    x=dg_rd(x2);
    for(i=0;;i=i+2)
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

       if(term<=accuracy)
        break;

       f=0;
       term=0.0;
       k++;
    }
    std::cout<<std::setprecision(6)<<"Using Taylor's series , cos( "<<x1<<" ) : "<<sum<<endl;
    cout<<"Using built-in function , cos( "<<x1<<" ) : "<<cos(x)<<endl;//radian value i.e. cos(2.0944) for cos(120*)
    cout<<"For 0.0001 accuracy the nth term :"<<k<<endl;
    return 0;
}

/*test case
cos 120 degree = cos 2.0944 radian = -0.5
*/
