/*

Define a class to represent a bank account. Including the following:
Data member:
    (a) Name of the customer
    (b) Account number
    (c) Type of account
    (d) Balance amount in the account
Member function:
    (a) To assign initial values
    (b) To deposit an amount
    (c) To withdraw an amount after checking the balance
    (d) To display name and balance

*/

#include<iostream>
#include<string>
using namespace std;

class bank_account
{
    private:
        string customer_name;
        int account_number;
        string account_type;
        float balance;

    public:
        void initial_value()
        {
            cout<<"Enter customer name : ";
            cin>>customer_name;
            cout<<"Enter account_number : ";
            cin>>account_number;
            cout<<"Enter account_type : ";
            cin>>account_type;
            cout<<"Enter balance : ";
            cin>>balance;

            cout<<endl;
            cout<<"Your name = "<<customer_name<<endl;
            cout<<"Your account number = "<<account_number<<endl;
            cout<<"Your account type = "<<account_type<<endl;
            cout<<"Your account balance amount = "<<balance<<endl;
        }

        void deposit()
        {
            float temp;
            cout<<"Your account balance amount : "<<balance<<endl;
            cout<<"Enter the amount you want to deposit : ";
            balance = balance + temp;
            cout<<"Your account balance amount after deposit: "<<balance<<endl;
        }

        void withdraw()
        {
            float temp;
            cout<<"Your account balance amount : "<<balance<<endl;
            cout<<"Enter the amount you want to withdraw : ";
            if(balance>=temp)
            {
                balance = balance - temp;
                cout<<"Your account balance amount after withdraw: "<<balance<<endl;
            }
            else
                cout<<"Withdraw of "<<temp<<"is not possible!!"<<endl;
                cout<<"Since your account balance amount is less than the withdraw amount "<<endl;
        }

        void display()
        {
            cout<<"Your name = "<<customer_name<<endl;
            cout<<"Your account balance amount = "<<balance<<endl;
        }

};

int main()
{
    cout<<"Press 1 to assign initial values"<<endl;
    cout<<"Press 2 to deposit an amount"<<endl;
    cout<<"Press 3 to withdraw an amount after checking the balance"<<endl;
    cout<<"Press 4 to display name and balance"<<endl;
    cout<<"Press 5 to continue"<<endl;
    cout<<"Press 6 to exit"<<endl;

    bank_account ba;
    int n;
    cout<<endl;
    contin:
    cout<<"Enter your choice : ";
    cin>>n;

    if(n==1)
    {
        ba.initial_value();
    }
    else if(n==2)
    {
        ba.deposit();
    }
    else if(n==3)
    {
        ba.withdraw();
    }
    else if(n==4)
    {
        ba.display();
    }
    else if(n==5)
    {
        goto contin;
    }
    else if(n==6)
    {
        goto last; //break statement works only with loop or switch
    }
    else
        cout<<"Wrong input!!!! please give correct input.";

    last:
    return 0;
}

/*TEST CASE



*/
