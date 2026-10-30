#include <iostream>

namespace First {
    int number = 10;
    int value = 20;
}

int main()
{
    using First::number;

    std::cout << number << std::endl;
    std::cout << First::value << std::endl;
    std::cout << First::value << std::endl;
    
    return 0;
}