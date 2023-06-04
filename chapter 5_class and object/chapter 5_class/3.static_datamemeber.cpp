#include <iostream>
#include<string>

using namespace std;

class Student
{
   private:

        int rollNo;
        string name;
        int marks;

   public:

        static int objectCount;

        void getdata()
       {
          cout << "Enter roll number: "<<endl;
          cin >> rollNo;
          cout << "Enter name: "<<endl;
          cin >> name;
          cout << "Enter marks: "<<endl;
          cin >> marks;

          objectCount++;
       }

   void putdata()
   {
      cout<<"Roll Number = "<< rollNo <<endl;
      cout<<"Name = "<< name <<endl;
      cout<<"Marks = "<< marks <<endl;
      cout<<endl;
   }
};

int Student::objectCount = 10;

int main()
{
   Student s1;
   s1.getdata();
   s1.putdata();

   Student s2;
   s2.getdata();
   s2.putdata();

   Student s3;
   s3.getdata();
   s3.putdata();

   cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}
