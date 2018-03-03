#include <iostream>

class Foo
{
    public:
        Foo() { std::cout << "Created" << this << std::endl;}
        ~Foo() { std::cout << "Destructed" << this << std::endl;}
};

int main()
{
    for(int i = 0; i < 3; i++)
    {
        Foo* foo = new Foo();
        delete foo;
    }

    return 0;
}