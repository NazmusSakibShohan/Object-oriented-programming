#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the last number of the Series you want to check the addition of that series = ";
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        sum+=j;
    }
    cout<<"Addition of the series = "<<sum;
    return 0;
}
