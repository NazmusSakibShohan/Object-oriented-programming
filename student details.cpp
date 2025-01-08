#include <iostream>
using namespace std;

class BATCH_D_76 {
  private:
  int id;
  string name;
  float cgpa;

 public:
    void input(int ID,string Name,float CGPA)
    {
        id=ID;
        name=Name;
        cgpa=CGPA;
    }
    void print()
    {
        cout<<endl;
        cout<<" Student ID is = "<<id<<endl;
        cout<<" Student Name is = "<<name<<endl;
        cout<<" Student CGPA is = "<<cgpa<<endl;
    }

};

int main() {
    BATCH_D_76 stu1,stu2,stu3;
    stu1.input(1289,"Shohan",3.99);
    stu1.print();
    stu2.input(1290,"Alif",3.89);
    stu2.print();
    stu3.input(1291,"Mahin",3.79);
    stu3.print();
    return 0; //SHOHAN
}
