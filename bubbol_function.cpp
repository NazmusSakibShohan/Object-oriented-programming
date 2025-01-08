#include<iostream>
using namespace std;

void input(int n,int arr[])
{
    cout<<"enter the elements of the array = ";
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

}

void Sort(int m,int a[])
{
      for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=(m-i);j++)
          {
              if(a[j]>a[j+1])
              {
                  int temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;

              }
          }
      }
}

void print(int o,int arry[])
{
    cout<<"the sorted array is = ";
      for(int i=1;i<=o;i++)
    {
        cout<<arry[i]<<" ";
    }

}
int main()
{
    int l;
    cout<<"enter the size of the array = ";
    cin>>l;
    int A[l];

    input(l,A);
    Sort(l,A);
    print(l,A);
      return 0;
}

