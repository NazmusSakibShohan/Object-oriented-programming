#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
    cout << "Class A" << endl;
    }
};

class B
{
public:
    void display()
    {
     cout << "Class B" << endl;
    }
};

class C : public A, public B
{
    public:
    void view()
    {
    A :: display();
    B :: display();
    }
};

int main()
{
C c;
c.view();
return 0;
}
