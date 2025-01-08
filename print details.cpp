#include <iostream>
using namespace std;

class Account_holder {
  private:
  string name;
  string gmail;
  double balance;
  string mobile;
 public:
    void input(string Name,string Gmail,double Balance,string Mobile)
    {
        name=Name;
        gmail=Gmail;
        balance=Balance;
        mobile=Mobile;
    }
    void print()
    {
        cout<<endl;
        cout<<" Account holder Name = "<<name<<endl;
        cout<<" Account holder Gmail = "<<gmail<<endl;
        cout<<" Account holder Balance = "<<balance<<endl;
        cout<<" Account holder mobile = "<<mobile<<endl;
        cout<<"---------------------------"<<endl;
    }

};

int main() {
    cout<<"         Account details "<<endl;
  Account_holder ac1,ac2,ac3,ac4,ac5;
    ac1.input("Shohan","dgrsgkjsjadgkl",30000.00,"01886222912");
    ac2.input("Alif","dfsgkjlsghwrui",30000.00,"01986222912");
    ac3.input("Mahin","utaeipotijowenjxf",25000.00,"01386222912");
    ac4.input("Sami","toiwiotjklxfnkb",20000.00,"01786222912");
    ac5.input("Sayem","etoiqeethjnfxl",30000.00,"01686222912");
    ac1.print();
    ac2.print();
    ac3.print();
    ac4.print();
    ac5.print();
    return 0;
}
