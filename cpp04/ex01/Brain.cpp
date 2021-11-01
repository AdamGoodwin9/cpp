#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructed\n";
}

Brain::Brain(Brain const& b)
{
    std::cout << "Brain copy constructed\n";
    for (int i = 0; i < count; i++)
    {
        ideas[i] = b.ideas[i].c_str();
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructed\n";
}

Brain& Brain::operator=(Brain const& b)
{
    std::cout << "Brain assigned\n";

    for (int i = 0; i < count; i++)
    {
        ideas[i] = b.ideas[i].c_str();
    }
    return *this;
}