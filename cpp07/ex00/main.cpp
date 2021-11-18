#include "whatever.hpp"
#include <iostream>

void intTest()
{
    std::cout << "INT TEST\n";
    int intA = 1.0, intB = 20;

    std::cout << "explicit template\n";
    std::cout << "max of ints: " << ::max<int>(intA, intB) << std::endl;
}

void floatTest()
{
    std::cout << "\n\nFLOAT TEST\n";
    float floatA = 1.2, floatB = 1.2;

    std::cout << "float a address: " << &floatA << std::endl;
    std::cout << "float b address: " << &floatB << std::endl;
    std::cout << "min ret address: " << &::min(floatA, floatB) << "\n\n";
    std::cout << "max of floats (implictly casted to ints): " << ::max<int>(floatA, floatB) << "\n\n\n";
}

void doubleTest()
{
    std::cout << "DOUBLE TEST\n";
    double doubleA = 4.20, doubleB = 42.0;
    
    std::cout << "double a: " << doubleA << std::endl;
    std::cout << "double b: " << doubleB << std::endl;
    std::cout << "swapping vars\n";
    ::swap(doubleA, doubleB);
    std::cout << "double a: " << doubleA << std::endl;
    std::cout << "double b: " << doubleB << std::endl;
    std::cout << "max of doubles: " << ::max(doubleA, doubleB) << "\n\n\n";
}

void subjectTest()
{
    std::cout << "SUBJECT TEST\n";
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
}

int main()
{
    intTest();
    floatTest();
    doubleTest();
    subjectTest();
    return 0;
}