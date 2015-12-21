#include <iostream>
using namespace std;
union a{
    int ia1;
    double da1;
    int ia2;
};
typedef struct{
    a a1;
    char y;
}b;
class c{
    double cd;
    b b1;
    a a2;
};
int main(){
    cout << sizeof(c) << endl;
    return 0;
}
