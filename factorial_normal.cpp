#include<iostream>
using namespace std;
int main()
{
    int i,n;
    long long fact=1.0;
    cout<<"Enter the number that factorial you want to check = ";
    cin>>n;
    for(i=1;i<=n;i++)
     {
         fact*=i;
     }
     cout<< "factorial of the number is = "<<fact;
     return 0;
}
