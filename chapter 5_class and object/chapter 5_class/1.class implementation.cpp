#include<iostream>

using namespace std;

class item
{
    private:
        int number;
        float cost;
    public:
        int vat=5;
        void getdata(int a , float b);
        void putdata()
        {
            cout<<endl;
            cout<<"Item number:"<<number<<"\n";
            cout<<"Total cost:"<<cost+vat<<"\n";
        }
};

void item::getdata(int a , float b)
{
    number=a;
    cost=b;
}

int main()
{
    int d;
    float c;

    item x;
    cout<<"----object x-------"<<endl;
    cout<<"Enter item_no. = ";
    cin>>d;
    cout<<"Enter cost = ";
    cin>>c;
    x.getdata(d,c);
    x.putdata();

    item y;
    cout<<"----object y-------"<<endl;
    cout<<"Enter item_no. = ";
    cin>>d;
    cout<<"Enter cost = ";
    cin>>c;
    y.getdata(d,c);
    y.putdata();

    return 0;
}
