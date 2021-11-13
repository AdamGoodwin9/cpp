#include "Caster.hpp"
#include <string>
#include <sstream>
#include <iomanip>

void printChar(Caster caster)
{
    std::cout << "char: ";
    try
    {
        char c = static_cast<char>(caster);
        std::cout << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void printInt(Caster caster)
{
    std::cout << "int: ";
    try
    {
        std::cout << static_cast<int>(caster) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void printFloat(Caster caster)
{
    std::cout << "float: " << static_cast<float>(caster) << "f" << std::endl;
}

void printDouble(Caster caster)
{
    std::cout << "double: " << static_cast<double>(caster) << std::endl;
}

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cout << "Single argument required\n";
        return 0;
    }

    Caster caster(argv[1]);

    printChar(caster);
    printInt(caster);
    std::cout << std::fixed << std::setprecision(1);
    printFloat(caster);
    printDouble(caster);

    return 0;
}