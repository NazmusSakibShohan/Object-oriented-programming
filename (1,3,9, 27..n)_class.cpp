#include<iostream>
using namespace std;

class Series{
private:
    int k;
public:
    void series(int n)
{
    k=n;
    for(int j=1;j<=n;j*=3)
    {
        cout<<j<<" ";
    }

}
};


int main()
{ Series you;
    int m;
    cout<<"Enter the last number of the Series = ";
    cin>>m;
   you.series(m);

    return 0;
}
