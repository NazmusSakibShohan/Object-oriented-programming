#include<iostream>
using namespace std;

void fibo(int m)
{   int i,f1=0,f2=1,f3=0;
     for(i=1;i<=m;i++)
    {
        if(i==1)
        {
            cout<<f1<<",";
            continue;
        }

         if(i==2)
        {
            cout<<f2<<",";
            continue;
        }
     else
    {   f3=f1+f2;
        f1=f2;
        f2=f3;

        cout<<f3<<",";}
    }
}

int main()
{
    int n;
    cout<<"enter the number of index the serise = ";
    cin>>n;
    cout<<"fibonacci serise is: ";
    fibo(n);
    return 0;
}
