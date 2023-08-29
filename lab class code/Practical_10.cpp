#include<iostream>
using namespace std;
class vect
{
    float i,j,k;
public:
    void create(float x,float y,float z)
    {
        i = x;
        j = y;
        k = z;
    }
    void mult(float m)
    {
        i = i*m;
        j = j*m;
        k = k*m;
    }
    void display()
    {
        cout<<i<<" i + "<<j<<" j + "<<k<<" k"<<endl;
    }
};

int main()
{
    float x1,y1,z1,x2,y2,z2;
    int n,m;
    vect obj1,obj2;

    cout<<"Enter first vector value:"<<endl;
    cout<<"\tEnter the x-axis value, i = ";
    cin>>x1;
    cout<<"\tEnter the x-axis value, j = ";
    cin>>y1;
    cout<<"\tEnter the x-axis value, k = ";
    cin>>z1;

    obj1.create(x1,y1,z1);

    cout<<"Enter second vector value:"<<endl;
    cout<<"\tEnter the x-axis value, i = ";
    cin>>x2;
    cout<<"\tEnter the x-axis value, j = ";
    cin>>y2;
    cout<<"\tEnter the x-axis value, k = ";
    cin>>z2;

    obj2.create(x2,y2,z2);
    cout<<"Enter->1, to multiply vector by a scalar value."<<endl;
    cout<<"Enter->2, to modify any element of the vector."<<endl;
    cout<<"Enter->3, to display the vector."<<endl;
    cin>>n;

    if(n==1)
    {
        int i;
        float m;
        cout<<"Enter the scalar value : ";
        cin>>m;
        cout<<"Enter 1 to multiply with first vector"<<endl;
        cout<<"Enter 2 to multiply with second vector"<<endl;
        cin>>i;
        if(i==1)
            obj1.mult(m);
        else if(i==2)
            obj2.mult(m);
        else
            cout<<"wrong submission."<<endl;
    }
    else if(n==2)
    {
        int i;
        float m;
        char c;
        cout<<"Enter 1 to modify the first vector"<<endl;
        cout<<"Enter 2 to modify the second vector"<<endl;
        cin>>i;
        if(i==1)
        {
            cout<<"Enter x to modify x-axis element value :";
            cout<<"Enter y to modify y-axis element value :";
            cout<<"Enter z to modify z-axis element value :";
            if(c=='x')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj1.create(m,y1,z1);
            }
            else if(c=='y')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj1.create(x1,m,z1);
            }
            else if(c=='z')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj1.create(x1,y1,m);
            }
            else
                cout<<"wrong submission"<<endl;
        }
        else if(i==2)
        {
            cout<<"Enter x to modify x-axis element value :";
            cout<<"Enter y to modify y-axis element value :";
            cout<<"Enter z to modify z-axis element value :";
            if(c=='x')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj2.create(m,y1,z1);
            }
            else if(c=='y')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj2.create(x1,m,z1);
            }
            else if(c=='z')
            {
                cout<<"Enter the new value : ";
                cin>>m;
                obj2.create(x1,y1,m);
            }
            else
                cout<<"wrong submission"<<endl;
        }
        else
            cout<<"wrong submission."<<endl;
    }
    return 0;
}
