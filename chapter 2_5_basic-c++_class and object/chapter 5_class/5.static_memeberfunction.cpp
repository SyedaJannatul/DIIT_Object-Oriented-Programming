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
        static int objectCount;

        static void showcount()
        {
          cout<<"count = "<<++objectCount<<endl;
          if (objectCount<=1)
            cout<<"Enter at least another student record "<<endl;
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
          cout<<endl;
          cout<<"Roll Number = "<< rollNo <<endl;
          cout<<"Name = "<< name <<endl;
          cout<<"Marks = "<< marks <<endl;
          cout<<endl;
       }
};

int Student::objectCount;

int main()
{
   Student s1;
   s1.getdata();
   s1.putdata();
   Student::showcount();

   Student s2;
   s2.getdata();
   s2.putdata();
   Student::showcount();

   Student s3;
   s3.getdata();
   s3.putdata();
   Student::showcount();


   cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}
