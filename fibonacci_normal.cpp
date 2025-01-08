#include<iostream>
using namespace std;
int main()
{
    int i,n,f1=0,f2=1,f3=0;
    cout<<"enter the number of index the serise = ";
    cin>>n;
    for(i=1;i<=n;i++)
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
    return 0;
}
