#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the size of the array = ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array = ";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }

      for(i=1;i<=n;i++)
      {
          for(j=1;j<=(n-i);j++)
          {
              if(a[j]>a[j+1])
              {
                  int temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;

              }
          }
      }
    cout<<"the sorted array is = ";
      for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
      return 0;
}

