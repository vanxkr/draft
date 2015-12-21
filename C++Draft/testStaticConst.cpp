#include <iostream>
using namespace std;

class A {
public:
    static const int getA() {
        return a;
    }
private:
    static int a;
};

int A::a = 100;

int main()
{
    cout << A::getA() << endl;
    return 0;
}
