#include "Karen.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "single argument required\n";
        return 0;
    }
    Karen().complain(argv[1]);
    return 0;
}
