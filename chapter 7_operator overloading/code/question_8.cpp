#include <iostream>
using namespace std;
class FLOAT
{
    float real;
public:
    FLOAT(){};
    FLOAT (float r)
    {
        real = r;
    }
    void display()
    {
       cout<<real<<endl;
    }
    FLOAT operator+ (float a)
    {
        FLOAT  temp;
        temp.real = real + a;
        return temp;
    }
    FLOAT operator- (float a)
    {
        FLOAT  temp;
        temp.real = real - a;
        return temp;
    }
    FLOAT operator* (float a)
    {
        FLOAT  temp;
        temp.real = real * a;
        return temp;
    }
    FLOAT operator/ (float a)
    {
        FLOAT  temp;
        temp.real = real / a;
        return temp;
    }
};

int main()
{
    FLOAT c5,c4,c3,c2,c1(100.50);
    cout<<"Before operation object value: ";
    c1.display();

    cout<<"After sum operation : ";
    c2 = c1 + 10.0;
    c2.display();
    cout<<"After subtract operation : ";
    c3 = c1 - 10.0;
    c3.display();
    cout<<"After multiplication operation : ";
    c4 = c1 * 10.0;
    c4.display();
    cout<<"After division operation : ";
    c5 = c1 / 10.0;
    c5.display();

    return 0;
}
