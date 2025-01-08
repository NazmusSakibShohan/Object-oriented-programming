#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"Fibonacci serise = ";
    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
