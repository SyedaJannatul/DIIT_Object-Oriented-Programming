#include<iostream>
using namespace std;

void swap1(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap2(int &a, int &b) // a and b are reference variable
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int m,n,r,s;
    cout<<"Enter two integer : ";
    cin>>m>>n;
    cout<<"Before swapping m = "<<m<<" ; n = "<<n<<endl;
    swap1(&m,&n); // call by passing address of the variable
    cout<<"After swapping m = "<<m<<" ; n = "<<n<<endl<<endl;

    cout<<"Enter two integer : ";
    cin>>r>>s;
    cout<<"Before swapping r = "<<r<<" ; s = "<<s<<endl;
    swap2(r,s);
    cout<<"After swapping r = "<<r<<" ; s = "<<s<<endl;

    return 0;
}



