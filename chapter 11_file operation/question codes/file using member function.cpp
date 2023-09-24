#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[10];
    float cost;

    ofstream fout;
    fout.open("data1.txt");//open the file to write on it

    cout<<"Enter item name = ";
    cin>>name;
    cout<<"Enter item cost = ";
    cin>>cost;

    fout<<name<<"\n";
    fout<<cost<<"\n";

    fout.close();//disconnect the file

    ifstream fin;
    fin.open("data1.txt");//open the file to read from it
    fin>>name;
    fin>>cost;

    cout<<"Item name = "<<name<<endl;
    cout<<"Item cost = "<<cost<<endl;

    fin.close();//disconnect the file

    return 0;
}

