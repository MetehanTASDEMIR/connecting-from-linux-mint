#include <iostream>
using namespace std;

namespace First {
    int number = 10;
    int value = 20;
}

//using namespace First;

int main() 
{
    using namespace First;

    std::cout << number << std::endl;
    std::cout << value << std::endl;

    return 0;
}