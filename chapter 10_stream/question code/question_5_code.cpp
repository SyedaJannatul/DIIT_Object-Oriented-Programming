#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    char c;
    cout<<"Input a text : ";
    cin.get(c);

    while(c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"Total number of characters : "<<count;
    return 0;
}
