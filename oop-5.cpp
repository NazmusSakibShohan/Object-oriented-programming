#include <iostream>
using namespace std;
class shohan{
    private:
    int a;
    public:
     void sami(int x)
    {
     a=x;
    }
    friend void Access_private(shohan obj);
};
void  Access_private(shohan obj)
{
    cout<<" Private data is = "<<obj.a<<endl;
}
int main() {
    shohan s;
    s.sami(50);
    Access_private(s);

    return 0;
}
