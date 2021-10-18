#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX 8

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void Add();
    void Search();

    int Count;
    Contact Contacts[MAX];
};

#endif