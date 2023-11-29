#include<iostream>
using namespace std;

class factorial
{

    public:
        int p,m=1;

        factorial(int n)
        {
            p=n;
            while(n!=1)
            {
                m = n*m;
                n--;
            }
            cout<<"Factorial of "<<p<<" = "<<m;
        }
};
int main()
{
    int i;
    cout<<"Enter a number : ";
    cin>>i;
    factorial obj(i);
    return 0;
}
