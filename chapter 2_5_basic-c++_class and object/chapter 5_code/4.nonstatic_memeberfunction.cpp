#include <iostream>
#include<string.h>

using namespace std;

class Student
{
   private:
        int rollNo;
        string name;
        int marks;
   public:
        int objectCount;

        void showcount()
        {
          cout<<"count = "<<++objectCount<<endl;
          cout<<endl;
        }

       void getdata()
       {
          cout << "Enter roll number: "<<endl;
          cin >> rollNo;
          cout << "Enter name: "<<endl;
          cin >> name;
          cout << "Enter marks: "<<endl;
          cin >> marks;
       }

       void putdata()
       {
          cout<<"Roll Number = "<< rollNo <<endl;
          cout<<"Name = "<< name <<endl;
          cout<<"Marks = "<< marks <<endl;

       }
};

//int Student::objectCount;

int main()
{
   Student s1;
   s1.getdata();
   s1.putdata();
   s1.showcount();

   Student s2;
   s2.getdata();
   s2.putdata();
   s2.showcount();

   Student s3;
   s3.getdata();
   s3.putdata();
   s3.showcount();


   //cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}
