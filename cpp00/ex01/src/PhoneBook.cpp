#include <limits>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    Count = 0;
    for (int i = 0; i < MAX; i++)
    {
        Contacts[i] = Contact();
    }
}
PhoneBook::~PhoneBook()
{}

void PhoneBook::Add()
{
    Contact c = Contact();

    std::cout << "First name: ";
    getline(std::cin, c.FirstName);
    std::cout << "Last name: ";
    getline(std::cin, c.LastName);
    std::cout << "Nickname: ";
    getline(std::cin, c.Nickname);
    std::cout << "Phone number: ";
    getline(std::cin, c.PhoneNumber);
    std::cout << "Darkest secret: ";
    getline(std::cin, c.DarkestSecret);

    if (Count == MAX) Count--;
    for (int i = Count; i > 0; i--)
    {
        Contacts[i] = Contacts[i - 1];   
    }
    Contacts[0] = c;
    Count++;
}

void PhoneBook::Search()
{
    if (Count == 0)
    {
        std::cout << "The PhoneBook is empty.\n";
        return;
    }
    
    for (int i = 0; i < Count; i++)
    {
        Contacts[i].PrintIndexContact(i);
    }

    int index;
    while (1)
    {
        std::cout << "Index: ";
        if (std::cin >> index && index >= 1 && index <= Count)
        {
            Contacts[index - 1].PrintFullContact();
            std::cin.clear();
            std::cin.ignore();
            return;
        }
        else
        {
            std::cout << "Invalid index. Please enter a number between 1 and " << Count << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}