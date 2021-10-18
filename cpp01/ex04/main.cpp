#include <iostream>
#include <fstream>
#include <sstream>

void sed(std::string fileName, std::string s1, std::string s2)
{
    std::ifstream file(fileName);
    if (!file)
    {
        std::cerr << "Couldn't open " << fileName << std::endl;
        return;
    }
    std::ostringstream text;
    text << file.rdbuf();
    std::string s = text.str();
    size_t index = s2.length() * -1;
    
    while (1)
    {
        index = s.find(s1, index + s2.length());
        if (index == std::string::npos)
            break;
        s.erase(index, s1.length());
        s.insert(index, s2);
    }
    file.close();
    
    std::ofstream ret(fileName + ".replace");
    ret << s;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments.\n";
        return 0;
    }

    std::string fileName(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    
    if (fileName.length() == 0 || s1.length() == 0 || s2.length() == 0)
    {
        std::cerr << "Invalid or empty parameters" << std::endl;
        return (0);
    }
    
    sed(fileName, s1, s2);
    
    return 0;
}