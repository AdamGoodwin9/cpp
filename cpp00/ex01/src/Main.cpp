#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook phoneBook = PhoneBook();
    while (1)
    {
        std::cout << std::endl << "EXIT, ADD, or SEARCH: ";
        getline(std::cin, input);        
        std::cout << std::endl;
        if (input == "EXIT")
        {
            return 0;
        }
        else if (input == "ADD")
        {
            phoneBook.Add();
        }
        else if (input == "SEARCH")
        {
            phoneBook.Search();
        }
        else
        {
            std::cout << "Invalid input.\n";
        }
    }
    return 0;
}