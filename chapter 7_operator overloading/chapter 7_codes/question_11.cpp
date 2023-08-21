// Basic to class type : it is performed with the help of constructor.
// Class to basic type : it is performed with the help of casting operator overloading.
#include<iostream>
using namespace std;
class time
{
        int hour , minutes;
    public:
        time(){};
        time(int n)
        {
            hour = n / 60;
            minutes = n % 60;
        }
        void display()
        {
          cout<<"Time = "<<hour<<" hours :: "<<minutes<<" minutes"<<endl;
        }
        operator int()  //conversion function
        {
            int h;
            cout<<"Enter extra hour = ";
            cin>>h;
            hour = hour + h; // t1.hour = t1.hour + h;
            return (hour);
        }
};
int main()
{
    time t1;
    int m , x;
    cout<<"Enter the time in minutes : ";
    cin>>m;
    t1 = m; // Basic to class type : it work as , t1 = time(m);
    t1.display();
    x = t1; // Class to basic type : it work as , x = t1.int();
    cout<<"Total hours = "<<x<<endl;
    return 0;
}
