#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream inobj;
    ofstream outobj;
    string str,source,destination;
    char st[100];

    cout<<"Enter the source file name = ";
    cin>>source;
    cout<<"Enter the destination file name = ";
    cin>>destination;

    inobj.open(source);

    if(inobj.fail())
    {
        cout<<"Error in opening source file!!"<<endl;
        exit(0);
    }

    outobj.open(destination);
    if(outobj.fail())
    {
        cout<<"Error in opening destination file!!"<<endl;
        inobj.close();
        exit(0);
    }

    while(!inobj.eof())
    {
        getline(inobj,str);
        outobj<<str<<endl;
    }
    inobj.close();
    outobj.close();

    return 0;
}
