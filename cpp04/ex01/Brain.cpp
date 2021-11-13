#include "Brain.hpp"
#include <string>

Brain::Brain()
{
    std::cout << "Brain default constructed\n";
}

Brain::Brain(const Brain& b)
{
    std::cout << "Brain copy constructed\n";
    
    for (int i = 0; i < count; i++)
    {
        ideas[i] = b.ideas[i];
    }
}

Brain::~Brain()
{
    std::cout << "Brain destructed\n";
}

Brain& Brain::operator=(Brain const& b)
{
    std::cout << "Brain assigned\n";\
    for (int i = 0; i < count; i++)
    {
        
        ideas[i] = b.ideas[i];
    }
    return *this;
}

void Brain::printIdeas()
{
    std::cout << "Ideas: ";
    for (size_t i = 0; i < count; i++)
    {
        std::cout << i << ") " << ideas[i] << " ";
    }
    std::cout << std::endl;
}