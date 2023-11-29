#include<iostream>
using namespace std;

class prime
{
    public:
        int p,m=1;

        prime(int n)
        {
            int flag = 1;
            for(int i=2; i <= n/2 ; i++)
            {
                if(n%i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<n<<" is not a prime number."<<endl;
            }
            else
            {
                cout<<n<<" is a prime number."<<endl;
            }
        }
};
int main()
{
    int i;
    cout<<"Enter a number : ";
    cin>>i;
    prime obj(i);
    return 0;
}
