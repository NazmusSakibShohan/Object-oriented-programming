#include<iostream>
using namespace std;
class employee{
public:
     int id;
     string name;
     float salary;
      employee(int i,string s,float f)
      {  id=i;
         name=s;
         salary=f;
     }
     void display(){
      cout<<"Id ="<<id<<"  Name ="<<name<<"  Salary ="<<salary<<endl;
      }

};

int main()
{
    employee e1=employee(37,"shohan",200000);
    employee e2=employee(39,"sayem",200000);
    e1.display();
    e2.display();

    return 0;
}
