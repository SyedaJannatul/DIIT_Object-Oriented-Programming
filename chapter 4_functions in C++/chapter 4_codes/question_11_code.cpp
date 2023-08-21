#include<iostream>
#include<string.h>
using namespace std;

int strlenght(string s)
{
    int i;
    for (i = 0; s[i] ;i++)
        ;
    return i;
}

int main()
{
    string st;
    cout<<"Enter a string :";
    getline(cin,st);
    /*cin considers a space (whitespace, tabs, etc)
    as a terminating character, which means that
    it can only display a single word
    (even if you type many words).
    the getline() function to read a line of text.
    It takes cin as the first parameter,
    and the string object as second*/

    cout<<"String length :"<<endl;
    cout<<"\t Without using any built-in function : "<<strlenght(st)<<endl;
    cout<<"\t Using size() function : "<<st.size()<<endl;
    cout<<"\t Using length() function : "<<st.length()<<endl;
    cout<<"\t Using strlen() function : "<<strlen(st.c_str())<<endl;
    //.c_str() convert the input object st into a character type array

    return 0;
}

