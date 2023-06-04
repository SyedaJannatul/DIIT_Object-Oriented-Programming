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
Write a program for handling 10 customers.

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
        void initial_value(int p)
        {
            cout<<"Enter customer name : ";
            cin>>customer_name;
            cout<<"Enter account_number : ";
            cin>>account_number;
            cout<<"Enter account_type : ";
            cin>>account_type;
            cout<<"Enter balance : ";
            cin>>balance;

            cout<<endl<<"Record for customer no. : "<<p<<endl;
            cout<<"\tCustomer no. "<<p<<" name = "<<customer_name<<endl;
            cout<<"\tCustomer no. "<<p<<" account number = "<<account_number<<endl;
            cout<<"\tCustomer no. "<<p<<" account type = "<<account_type<<endl;
            cout<<"\tCustomer no. "<<p<<" account balance amount = "<<balance<<endl;
        }

        void deposit(int p)
        {
            float temp;
            cout<<"Customer no. "<<p<<" account balance amount : "<<balance<<endl;
            cout<<"\tEnter the amount you want to deposit : ";
            balance = balance + temp;
            cout<<"\tCustomer no. "<<p<<" account balance amount after deposit: "<<balance<<endl;
        }

        void withdraw(int p)
        {
            float temp;
            cout<<"Customer no. "<<p<<" account balance amount : "<<balance<<endl;
            cout<<"\tEnter the amount you want to withdraw : ";
            if(balance>=temp)
            {
                balance = balance - temp;
                cout<<"\tCustomer no. "<<p<<" account balance amount after withdraw: "<<balance<<endl;
            }
            else
                cout<<"\tWithdraw of "<<temp<<"is not possible!!"<<endl;
                cout<<"\tSince customer no. "<<p<<" account balance amount is less than the withdraw amount "<<endl;
        }

        void display(int p)
        {
            cout<<"Customer no. "<<p<<" name = "<<customer_name<<endl;
            cout<<"Customer no. "<<p<<" account balance amount = "<<balance<<endl;
        }

};

int main()
{


    int m,i;
    cout<<"Enter the number of customers to record : ";
    cin>>m;
    bank_account ba[m];

    cout<<"\tPress 1 to assign initial values"<<endl;
    cout<<"\tPress 2 to deposit an amount to a specific customer"<<endl;
    cout<<"\tPress 3 to withdraw an amount after checking the balance of a specific customer"<<endl;
    cout<<"\tPress 4 to display name and balance of a specific customer"<<endl;
    cout<<"\tPress 5 to exit"<<endl;

    int n;
    cout<<endl<<"Enter your choice : ";
    cin>>n;

    if(n==1)
    {
        for(i = 1; i <= m; i++ )
        {
            cout<<endl<<"Record for customer no. : "<<i<<endl;
            ba[i].initial_value(i);
        }
    }
    else if(n==2)
    {
        int t;
        cout<<"Enter customer no. : ";
        cin>>t;
        ba[t].deposit(t);
    }
    else if(n==3)
    {
        int t;
        cout<<"Enter customer no. : ";
        cin>>t;
        ba[t].withdraw(t);
    }
    else if(n==4)
    {
        int t;
        cout<<"Enter customer no. : ";
        cin>>t;
        ba[t].display(t);
    }
    else if(n==5)
    {
        goto last; //break statement works only with loop or switch
    }
    else
        cout<<"Wrong input!!!! please give correct input.";

    last:
    return 0;
}

/*TEST CASE

no. of customer record = 3

customer 1
customer_name =meem
account_number = 123
account_type =current
balance =100

customer 2
customer_name =jannat
account_number = 456
account_type =saving
balance =200

customer 3
customer_name =naim
account_number = 789
account_type =current
balance =300

deposit to customer no. 2
deposit amount=50

withdraw from customer no.3
withdraw amount=100

*/
