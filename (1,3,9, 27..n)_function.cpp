#include<iostream>
using namespace std;

void series(int n)
{
    for(int j=1;j<=n;j*=3)
    {
        cout<<j<<" ";
    }

}

int main()
{
    int m;
    cout<<"Enter the last number of the Series = ";
    cin>>m;
   series(m);

    return 0;
}
