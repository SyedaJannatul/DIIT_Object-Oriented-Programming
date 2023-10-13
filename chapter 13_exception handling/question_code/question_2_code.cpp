#include<iostream>
using namespace std;

int main()
{
    try
    {
        int a,b,c,n;
        float result;
        cout<<"Enter two integer(a>b):"<<endl;
        cout<<"a = ";
        cin>>a;
        cout<<"b = ";
        cin>>b;
        while(1)
        {
            c = a-b;
            b++;
            if(c!=0)
            {
                result = 100/c;
                cout<<"RESULT = "<<result<<endl;
                result = 0;
            }
            else
            {
                throw(c);
            }
        }
    }
    catch(int n)
    {
        cout<<"Exception occur for c = "<<n;
    }
    return 0;
}
