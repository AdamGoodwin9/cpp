#include "iter.hpp"

int main()
{
    int intArray[] = { 1, 2, 3, 4 };
    std::cout << "ITERATING PRINT ON INT ARRAY\n";
    iter(intArray, 4, printT);

    std::string stringArray[] = { "Simple", "String", "Array!" };
    std::cout << "\n\nITERATING PRINT ON STRING ARRAY\n";
    iter(stringArray, 3, printT);

    std::cout << std::endl;
    return 0;
}