#include <iostream>
using namespace std;
class fibo{
private:
    int n;
    int a[50];
public:
   fibo()
    {
        a[0]=0;
        a[1]=1;
         cout<<"Fibonacci serise = ";
         cout<<a[0]<<" ";
         cout<<a[1]<<" ";
    }

    fibo(int n,int a[])
    {
         a[0]=0;
         a[1]=1;
        for(int i=2;i<=n;i++)
        {
            a[i]=a[i-1]+a[i-2];

        }
    }

   void display(int n,int a[])
    {

        for(int i=2;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
    fibo f1;
    fibo f2= fibo( n,a);
    f2.display(n,a);
    return 0;
}

