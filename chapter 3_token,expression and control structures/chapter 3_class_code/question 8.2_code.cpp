#include <iostream>
using namespace std;
int main()
{
    // 2.dynamically allocating an integer memory block
    // with 100 as its initial value
    int *p = new int(100);
    cout << "Value at memory pointed by p= " << *p<<endl;
    // p memory deallocated using the delete operator
    delete p;
    cout<<"Garbage value: "<<*p<<endl;
    p = NULL;
    cout<<"*p value: "<<*p;

    return 0;
}
