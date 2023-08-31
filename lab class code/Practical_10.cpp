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
        i = i * m;
        j = j * m;
        k = k * m;
    }
    void display()
    {
        cout<<i<<" i + "<<j<<" j + "<<k<<" k"<<endl;
    }
    vect operator+ (vect v)
    {
        vect temp;
        temp.i = i + v.i;
        temp.j = j + v.j;
        temp.k = k + v.k;
        return temp;
    }
};

int main()
{
    float x1,y1,z1,x2,y2,z2;
    int n;
    vect obj1,obj2,obj3;

    cout<<"Enter first vector value:"<<endl;
    cout<<"\tEnter the x-axis value, i = ";
    cin>>x1;
    cout<<"\tEnter the y-axis value, j = ";
    cin>>y1;
    cout<<"\tEnter the z-axis value, k = ";
    cin>>z1;

    obj1.create(x1,y1,z1);

    cout<<"Enter second vector value:"<<endl;
    cout<<"\tEnter the x-axis value, i = ";
    cin>>x2;
    cout<<"\tEnter the y-axis value, j = ";
    cin>>y2;
    cout<<"\tEnter the z-axis value, k = ";
    cin>>z2;

    obj2.create(x2,y2,z2);

    option:
    cout<<endl;
    cout<<"Enter->1, to multiply vector by a scalar value."<<endl;
    cout<<"Enter->2, to modify any element of the vector."<<endl;
    cout<<"Enter->3, to display the vector."<<endl;
    cout<<"Enter->4, to add the two vectors."<<endl;
    cout<<"Enter->5, to exit."<<endl;
    cout<<"Enter your choice : ";
    cin>>n;
    cout<<endl;
    if(n==1)
    {
        int i;
        float m;
        cout<<"\tEnter 1 to multiply the first vector with a scalar value. "<<endl;
        cout<<"\tEnter 2 to multiply the second vector with a scalar value. "<<endl;
        cout<<"\tEnter your choice : ";
        cin>>i;
        cout<<"\tEnter the scalar value : ";
        cin>>m;
        if(i==1)
            obj1.mult(m);
        else if(i==2)
            obj2.mult(m);
        else
            cout<<"wrong submission."<<endl;
        goto option;
    }
    else if(n==2)
    {
        int i;
        float m;
        char c;
        cout<<"\tEnter 1 to modify the first vector"<<endl;
        cout<<"\tEnter 2 to modify the second vector"<<endl;
        cout<<"\tEnter your choice : ";
        cin>>i;
        if(i==1)
        {
            cout<<"\t\tEnter x to modify x-axis element value"<<endl;
            cout<<"\t\tEnter y to modify y-axis element value"<<endl;
            cout<<"\t\tEnter z to modify z-axis element value"<<endl;
            cout<<"\t\tEnter your choice : ";
            cin>>c;
            cout<<"\t\tEnter the new value : ";
            cin>>m;
            if(c=='x')
            {
                obj1.create(m,y1,z1);
            }
            else if(c=='y')
            {
                obj1.create(x1,m,z1);
            }
            else if(c=='z')
            {
                obj1.create(x1,y1,m);
            }
            else
                cout<<"wrong submission"<<endl;
        }
        else if(i==2)
        {
            cout<<"\t\tEnter x to modify x-axis element value :"<<endl;
            cout<<"\t\tEnter y to modify y-axis element value :"<<endl;
            cout<<"\t\tEnter z to modify z-axis element value :"<<endl;
            cout<<"\t\tEnter your choice : ";
            cin>>c;
            cout<<"\t\tEnter the new value : ";
            cin>>m;
            if(c=='x')
            {
                obj2.create(m,y2,z2);
            }
            else if(c=='y')
            {
                obj2.create(x2,m,z2);
            }
            else if(c=='z')
            {
                obj2.create(x2,y2,m);
            }
            else
                cout<<"wrong submission"<<endl;
        }
        else
            cout<<"wrong submission."<<endl;
        goto option;
    }
    else if(n==3)
    {
        int m;
        cout<<"\tEnter 1 to display the first vector. :"<<endl;
        cout<<"\tEnter 2 to display the second vector. :"<<endl;
        cout<<"\tEnter your choice : ";
        cin>>m;
        if(m==1)
        {
            cout<<"\tFirst vector : ";
            obj1.display();
        }
        else if(m==2)
        {
            cout<<"\tSecond vector : ";
            obj2.display();
        }
        else
            cout<<"wrong submission"<<endl;
        goto option;
    }
    else if(n==4)
    {
        obj3=obj1+obj2;
        cout<<"After addition the resultant vector: ";
        obj3.display();
        goto option;
    }
    else if(n==5)
    {
        goto ext;
    }
    else
        cout<<"Wrong submission";
    ext:
    return 0;
}
