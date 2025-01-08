#include<iostream>
using namespace std;

void addition(int n)
{
    int sum=0;
    for(int j=1;j<=n;j++)
    {
        sum+=j;
    }
}

void print()
{
     int sum;
     cout<<"Addition of the series = "<<sum;
}

int main()
{
    int m;
    cout<<"Enter the last number of the Series you want to check the addition of that series = ";
    cin>>m;
    addition(m);
    print();

    return 0;
}
