#include <iostream>
using namespace std;
class C {
    public:
        C(){}
        static int a;
};
int C::a = 0;
int main()
{
    C c;
    cout << c.a << endl;
    cout << C::a << endl;
    return 0;
}
