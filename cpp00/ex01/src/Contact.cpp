#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void Contact::PrintField(std::string field)
{
    if (field.size() > 10)
    {
        for (int i = 0; i < 9; i++)
        {
            std::cout << field[i];
        }
        std::cout << '.';
    }
    else
    {
        std::cout << std::setw(10) << field;
    }
}

void Contact::PrintIndexContact(int i)
{
    std::cout << std::setw(10) << i + 1;
    std::cout << "|";
    PrintField(FirstName);
    std::cout << "|";
    PrintField(LastName);
    std::cout << "|";
    PrintField(Nickname);
    std::cout << std::endl;
}

void Contact::PrintFullContact()
{
    std::cout << "Contact: " << FirstName << " " << LastName << " ("  << Nickname << ")" << std::endl;
    std::cout << "Call them at: " << PhoneNumber << std::endl;
    std::cout << "Their darkest secret: " << DarkestSecret << std::endl;
}