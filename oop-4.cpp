#include <iostream>
using namespace std;
class a{
    public:
    void display()
    {
        cout<<"class A"<<endl;
    }
};
class b{
    public:
    void display()
    {
        cout<<"class B"<<endl;
    }
};
class c:public a,public b{
    public:
    void display()
    { cout<<"Inherit from Class C"<<endl;
       a::display();
       b::display();
    }
};
int main() {
    c x;
    x.display();
    return 0;
}