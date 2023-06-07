/*

Create two classes DM and DB which store the value of distances.
DM stores distances in meters and centimeters and DB in feet and inches.
Write a program that can read values for the class objects and add one object DM with another object DB.
Use the friend function to carry out the addition operation.
The object that stores the results may be a DM object depending on the units in which the results are required.
The display should be in the format of feet and inches or meters and centimeters depending on the object on display.

*/

#include<iostream>
using namespace std;

class DB;

class DM
{
    private:
        float m,cm;
    public:
        void getdata()
        {
            cout<<"Enter the distance values (in meter-centimeter format) : ";
            cin>>m>>cm;
        }
        void putdata()
        {
            cout<<"The distance values :"<<m<<" meter , "<<cm<<" centimeter."<<endl<<endl;
        }
        friend void addition(DM,DB);
};
class DB
{
    private:
        float ft,inch;
    public:
        void getdata()
        {
            cout<<"Enter the distance values (in feet-inches format) : ";
            cin>>ft>>inch;
        }
        void putdata()
        {
            cout<<"The distance values :"<<ft<<" feet , "<<inch<<" inches."<<endl<<endl;
        }
        friend void addition(DM,DB);
};

void addition (DM a,DB b)
{
    int n;
    cout<<"**Press 1 to get result in meter-centimeter format."<<endl<<"**Press 2 to get result in feet-inches format."<<endl<<endl;
    cout<<"Enter your choice : ";
    cin>>n;

    if (n==1)
    {
        DM t;
        int temp;
        temp = (a.m*100)+a.cm+(b.ft*30.48)+(b.inch*2.54); //all terms convert to centimeters

        if(temp>=100)
        {
          t.m = temp/100;
          t.cm = temp%100;
        }
        else
        {
            t.m = 0;
            t.cm  = temp;
        }

        t.putdata();
    }
    else if (n==2)
    {
        DB t;
        int temp;
        temp = (a.m*39.3701)+(a.cm*0.393701)+(b.ft*12)+ b.inch; //all terms convert to inches

        if(temp>=12)
        {
          t.ft = temp/12;
          t.inch = temp%12;
        }
        else
        {
            t.ft = 0;
            t.inch = temp;
        }
        t.putdata();
    }
    else
        cout<<"Wrong submission!!";
}


int main()
{
    DM md;
    DB bd;
    md.getdata();
    md.putdata();
    bd.getdata();
    bd.putdata();
    addition(md,bd);
    return 0;
}

/*TEST CASE

2 meters 50 centimeters (= 8 feets 2.42519685 inches)
3 feets 78 inches (= 2 meters 89.56 centimeters)

result

m/cm = 5.3956 meters
ft/inch = 17.7020997 feet (17 feet 827⁄64 inches)

*/
