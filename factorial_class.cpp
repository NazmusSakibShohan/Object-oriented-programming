#include<iostream>
using namespace std;

class Facto{
private:
    int k;
public:
    void factorial(int m)
  {  k=m;
     long long fact=1.0;
     for(int i=1;i<=k;i++)
      {
         fact*=i;
      }
      cout<< "factorial of the number is = "<<fact;
  }

};

int main()
{  Facto f;
    int n;
    cout<<"Enter the number that factorial you want to check = ";
    cin>>n;
   f.factorial(n);

     return 0;
}
