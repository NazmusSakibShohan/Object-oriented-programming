#include<iostream>
using namespace std;

void vote(int a)
{
    if(a>=18)
    {
        cout<<"you are eligible for the vote";
    }
    else
      cout<<"you are not eligible for the vote";

}

int main()
{
    int age;
    cout<<"enter your age = ";
    cin>>age;
    vote(age);
    return 0;
}
