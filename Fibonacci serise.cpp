#include <iostream>
using namespace std;
void fibo(int a[],int n)
{
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
}
void display(int a[],int n)
{
    cout<<"Fibonacci serise = ";
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
   fibo( a,n);
   display(a,n);
    return 0;
}
