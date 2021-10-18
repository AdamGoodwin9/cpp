#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
public:
    Contact();
    ~Contact();

    void PrintIndexContact(int i);
    void PrintFullContact();

    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
private:
    void PrintField(std::string);
};

#endif