#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[10];
    float cost;

    ofstream out("data.txt");//open the file to write on it

    cout<<"Enter item name = ";
    cin>>name;
    cout<<"Enter item cost = ";
    cin>>cost;

    out<<name<<"\n";
    out<<cost<<"\n";

    out.close();//disconnect the file

    ifstream in("data.txt");//open the file to read from it
    in>>name;
    in>>cost;

    cout<<"Item name = "<<name<<endl;
    cout<<"Item cost = "<<cost<<endl;

    in.close();//disconnect the file

    return 0;
}
