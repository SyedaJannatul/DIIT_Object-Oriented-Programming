#include<iostream>
using namespace std;

int m = 10;
int p;
int main()
{
    int m = 20;
    {
        int k = m;
        int m = 30;
        cout<<"From inner block the inner block m = "<<m<<endl;
        cout<<"From inner block the global m(::m) = "<<::m<<endl;
        cout<<"From inner block the outside of inner block m(=k) = "<<k<<endl<<endl;
        p = m;
    }
    cout<<"From outside of inner block the outside of inner block m = "<<m<<endl;
    cout<<"From outside of inner block the global m(::m) = "<<::m<<endl;
    cout<<"From outside of inner block the inside of inner block m = "<<p<<endl;

    return 0;
}



