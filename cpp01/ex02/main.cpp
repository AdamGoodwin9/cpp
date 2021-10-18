#include <iostream>
#include <iomanip>

int main()
{
    std::string original = "HI THIS IS BRAIN";
    std::string *stringPTR = &original;
    std::string& stringREF = original;

    std::cout << std::setw(20) << "Original Adress: " << &original << std::endl;
    std::cout << std::setw(20) << "Pointer Adress: " << stringPTR << std::endl;
    std::cout << std::setw(20) << "Reference Adress: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(20) << "Original Value: " << original << std::endl;
    std::cout << std::setw(20) << "Pointer Value: " << *stringPTR << std::endl;
    std::cout << std::setw(20) << "Reference Value: " << stringREF << std::endl;
}