#include <iostream>
using namespace std;
class construct{
    private:
    int a,b;
    public:
    construct()
    {
        a=5;
        b=10;
    }
    construct(int x,int y)
    {
        a=x;
        b=y;
    }
    construct(construct &co)
    {
        a=co.a;
        b=co.b;
    }
    void display()
    {
        cout<<"a= "<<a<<"  b= "<<b<<endl;
    }
};

int main() {
   construct c1;
   construct c2 (200,300);
   construct c3(c2);
   c1.display();
   c2.display();
   c3.display();

    return 0;
}