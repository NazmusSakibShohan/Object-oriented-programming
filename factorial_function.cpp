#include<iostream>
using namespace std;

void factorial(int m)
{
    long long fact=1.0;
   for(int i=1;i<=m;i++)
     {
         fact*=i;
     }
     cout<< "factorial of the number is = "<<fact;
}


int main()
{
    int n;
    cout<<"Enter the number that factorial you want to check = ";
    cin>>n;
    factorial(n);

     return 0;
}
