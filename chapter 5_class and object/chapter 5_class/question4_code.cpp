#include<iostream>
using namespace std;


class A
{
    private:
        int n;
    public:
        void getdata();
        void putdata(int m)
        {
            cout<<"multiply by  2 to the first input = "<<m*2<<endl<<endl;
            getdata(); //b) Inside the member function of the class A access the member function of the same class
        }
};
class B
{
    private:
        int n;
    public:
        void getdata()
        {
            int m;
            cout<<"Enter an integer : ";
            cin>>n;
            m=n;
            A a1;
            a1.putdata(m); //c) Inside the member function of class A access member function of class B (another class)
        }
        void putdata(int m)
        {
            cout<<"adding 2 to the second input = "<<m+2<<endl;
        }
};
void A :: getdata()
{
    int m;
    cout<<"Enter another integer : ";
    cin>>n;
    m=n;
    B b1;
    b1.putdata(m); //c) Inside the member function of class A access member function of class B (another class)
}
int main()
{
    B t;
    t.getdata(); //a) Inside the main program access member function of class B
    return 0;
}




