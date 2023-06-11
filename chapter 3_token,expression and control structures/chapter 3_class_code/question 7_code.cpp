#include <iostream>
using namespace std;
int main()
{
   int a = 8;
   int &b = a;
   int c = a;
   int *d;
   d = &a;

   cout << "The variable a value : " << a <<endl;
   cout << "The reference variable b value : " << b <<endl;
   cout << "The variable c value : " << c <<endl<<endl;
   cout << "The pointer variable *d value : " << *d <<endl;
   cout << "The pointer variable d value : " << d <<endl<<endl;

   cout << "The &a  : " << &a <<endl<<endl;
   cout<<"&b = a"<<endl;
   cout << "The &b  : " << &b <<endl<<endl;
   cout<<"c = a"<<endl;
   cout << "The &c  : " << &c <<endl<<endl;
   cout<<"*d = &a"<<endl;
   cout << "The &d  : " << &d <<endl;

   return 0;
}

