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

        int objectCount;

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

//int Student::objectCount = 0;

int main()
{
   Student s1;
   s1.getdata();
   s1.putdata();
   cout << "Total objects created = " <<s1.objectCount << endl;

   Student s2;
   s2.getdata();
   s2.putdata();
   cout << "Total objects created = " <<s2.objectCount << endl;

   Student s3;
   s3.getdata();
   s3.putdata();
   cout << "Total objects created = " <<s3.objectCount << endl;

   //cout << "Total objects created = " << Student::objectCount << endl;
   return 0;
}
