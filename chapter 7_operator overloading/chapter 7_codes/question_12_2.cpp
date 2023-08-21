//converting input time in hours and minutes into mintues
#include <iostream>
using namespace std;
class Minute
{
public:
    int mins;//all variables must be declare in the public section
    Minute()
    {
        mins = 0;
    }
    void show()
    {
        cout << "\nTotal Minute : " << mins << endl;
    }
};
class Time
{
    int hr, mins;
public:
    Time(){};
    Time(int h, int m)
    {
        hr = h;
        mins = m;
    }
    operator Minute() //conversion function : overloading minute class
    {
        Minute m;
        m.mins = (hr * 60) + mins;
        return m;
    }
    void show()
    {
        cout << "Hour: " << hr << endl;
        cout << "Minute : " << mins << endl;
    }
};

int main()
{
    int h,m;
    cout<<"Enter time in hour and minutes = ";
    cin>>h>>m;
    Time t1(h,m);
    Minute m1;
    m1 = t1; //Minute class is destination and Time class is source class
    t1.show();
    m1.show();
    return 0;
}
