#include<iostream>
using namespace std;
int m = 5;
void add()
{
    static int s = 2;
    class A
    {
        private:
            int n;
        public:
            void getdata()
            {
                cout<<"Enter an integer : ";
                cin>>n;
                cout<<endl;
            }
            void putdata(int c)
            {
                int g = ::m;
                cout<<"Entered integer : "<<n<<endl;
                cout<<"Static data of the function : "<<c<<endl;
                cout<<"Global data : "<<g<<endl<<endl;
                cout<<"Sum = "<<n+c+g<<endl;
            }
    };
    A a;
    a.getdata();
    a.putdata(s);
}
int main()
{
        add();
        return 0;
}






