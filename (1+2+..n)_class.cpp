#include<iostream>
using namespace std;

class summation{
private:
    int k;

public:
void addition(int n)
{   k=n;
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

};

int main()
{   summation you;
    int m;
    cout<<"Enter the last number of the Series you want to check the addition of that series = ";
    cin>>m;
    you.addition(m);
    you.print();

    return 0;
}
