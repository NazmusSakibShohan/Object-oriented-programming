#include<iostream>
using namespace std;
class Fibo{
private:
    int k;
public:
    void fibo(int m)
{
     k=m;
     int i,f1=0,f2=1,f3=0;
     for(i=1;i<=k;i++)
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
};


int main()
{   Fibo f;
    int n;
    cout<<"enter the number of index the serise = ";
    cin>>n;
    cout<<"fibonacci serise is: ";
   f.fibo(n);
    return 0;
}
