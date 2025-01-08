#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the last number of the Series = ";
    cin>>n;
    for(int j=1;j<=n;j*=3)
    {
        cout<<j<<" ";
    }

    return 0;
}
