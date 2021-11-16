#include "Form.hpp"

int main()
{
    Form legal = Form("Legal Form", 1, 150);
    Form health = Form("Health Form", 150, 1);

    std::cout << legal;
    std::cout << health;

    try
    {
        Form("A", 100, 0);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Form("B", 0, 100);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Form("C", 151, 0);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Form("D", 0, 151);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Form f = Form("Oil rig in the middle east", 20, 10);
    Bureaucrat b = Bureaucrat("President Donaldo El Trumpadoro", 5);
    Bureaucrat idiot = Bureaucrat("hobo man", 140);

    idiot.signForm(f);
    b.signForm(f);
    b.signForm(f);
}