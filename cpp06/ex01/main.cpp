#include <iostream>
#include <stdint.h>

struct Data
{
    bool swagMode;
    std::string s;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data* before = new Data();
    before->s = "hello";
    before->swagMode = true;

    std::cout << before << std::endl;
    
    uintptr_t middle = serialize(before);
    Data* after = deserialize(middle);

    std::cout << after << std::endl;
    std::cout << after->s << std::endl;

    delete before;
    return 0;
}
