#include <iostream>
using namespace std;
int main()
{
    char a ='A', b ='B';
    //
    const char *ptr;
    ptr = &a;
    cout<<"ptr = &a"<<endl;
    cout<<"value pointed by ptr = "<<*ptr<<endl;
    ptr = &b; //ptr = b is illegal here,because it trying to
              //change the character value.
    cout<<"ptr = &b"<<endl;
    cout<<"value pointed by ptr = "<<*ptr<<endl;
    //
    char *const pt = &a;    //pt need to be initialized here.
    cout<<"pt = &a"<<endl;
    cout<<"value pointed by pt = "<<*pt<<endl;
    *pt = b;    //ptr = &b is illegal here,because it trying to
              //change the pointer value.
    cout<<"*pt = b"<<endl;
    cout<<"value pointed by pt = "<<*pt<<endl;
    //
    const char *const p = &a;
    cout<<"p = &a"<<endl;
    cout<<"value pointed by p = "<<*p<<endl;
    //p=&b is illegal
    //*p=b,is illegal
   return 0;
}

