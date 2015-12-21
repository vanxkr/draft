#include <iostream>
class Bassclass{
public:
    Bassclass(){
        std::cout << "Bassclass 1" << std::endl;
    }
private:
    int ix;
};
class Derived : public Bassclass{
public:
    Derived(){
        std::cout << "Derived 1" << std::endl;
    }
    Derived(int i){
        std::cout << "Derived 2" << std::endl;
    }
};
int main()
{
    Derived d(0);
    return 0;
}
