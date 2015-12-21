#include <iostream>
class Bassclass{
public:
    Bassclass(){
        std::cout << "Bassclass 1" << std::endl;
    }
    Bassclass(int i){
        std::cout << "Bassclass 2" << std::endl;
    }
private:
    int ix;
};
class Derived : public Bassclass{
public:
#if 0
    Derived(){
        std::cout << "Derived 1" << std::endl;
    }
    Derived(int i){
        std::cout << "Derived 2" << std::endl;
    }
#endif
};
int main()
{
    Derived d;
    return 0;
}
