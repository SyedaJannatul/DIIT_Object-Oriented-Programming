#include <iostream>
using namespace std;
int main()
{
    /*3.When there is insufficient memory in the heap segment
    during the run-time of a C++ program, the new request
    for allocation fails by throwing an exception of type
    std::bad_alloc. It can be avoided using a nothrow argument
    with the new operator. When we use nothrow with new, it returns
    a NULL pointer. So, the pointer variable should be checked that
    is formed by new before utilizing it in a program.*/
    int *pt = new(nothrow) int;
    if (pt == NULL)
    {
       cout << "Allocation Failed!\n";
    }
    *pt = 502;
    cout << "Value at memory pointed by pt= " << *pt<<endl;
    // pt memory deallocated using the delete operator
    delete pt;
    cout<<"Garbage value: "<<*pt<<endl;
    pt = NULL;
    cout<<"*pt value: "<<*pt;
    return 0;
}
