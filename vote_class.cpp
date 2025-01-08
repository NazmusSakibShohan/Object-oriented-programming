#include<iostream>
using namespace std;
class Vote{
private:
    int k;
public:
    void vote(int a)
{
    k=a;
    if(k>=18)
    {
        cout<<"you are eligible for the vote";
    }
    else
      cout<<"you are not eligible for the vote";

}

};


int main()
{   Vote v;
    int age;
    cout<<"enter your age = ";
    cin>>age;
   v. vote(age);
    return 0;
}
