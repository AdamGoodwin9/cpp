#include <iostream>
#include <cstdlib>

class Base
{
public:
    virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate()
{
    switch (rand() % 3)
    {
    case 0:
        std::cout << "Generating A\n";
        return new A();
        break;
    case 1:
        std::cout << "Generating B\n";
        return new B();
        break;
    case 2:
        std::cout << "Generating C\n";
        return new C();
        break;
    default:
        throw std::out_of_range("Random number out of range");
    }

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
		std::cout << "Identified A by pointer." << std::endl;
	}
    else if (dynamic_cast<B*>(p))
    {
		std::cout << "Identified B by pointer." << std::endl;
	}
    else if (dynamic_cast<C*>(p))
    {
		std::cout << "Identified C by pointer." << std::endl;
	}
    else
    {
		throw std::runtime_error("Invalid type");
    }
}

void identify(Base& p)
{
    try
    {
        Base b = dynamic_cast<A&>(p);
		std::cout << "Identified A by ref." << std::endl;
        return;
    } catch (std::exception e) {}

    try
    {
        Base b = dynamic_cast<B&>(p);
		std::cout << "Identified B by ref." << std::endl;
        return;
    } catch (std::exception e) {}

    try
    {
        Base b = dynamic_cast<C&>(p);
		std::cout << "Identified C by ref." << std::endl;
        return;
    } catch (std::exception e) {}

	throw std::runtime_error("Invalid type");
}

int main()
{
    srand(time(0));
    for (size_t i = 0; i < 3; i++)
    {
        Base* b = generate();
        identify(b);
        identify(*b);
        delete b;
        std::cout << std::endl;
    }
    
    return 0;
}