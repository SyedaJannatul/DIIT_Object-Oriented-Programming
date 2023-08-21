#include <iostream>
using namespace std;
int main()
{
    // 1.dynamically allocating an integer memory block
    int *ptr = new int;
    // storing a value at the memory pointed by ptr
    *ptr = 8;
    cout << "Value at memory pointed by ptr= " << *ptr<<endl;
    // ptr memory deallocated using the delete operator
    delete ptr;
    cout<<"Garbage value: "<<*ptr<<endl;
    ptr = NULL;
    cout<<"*ptr value: "<<*ptr<<endl;
    return 0;
}
