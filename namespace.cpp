#include <iostream>
using namespace std;

namespace FirstNamespace
{
    int number = 10;
}

namespace SecondNamespace
{
    int number = 20;
}

int main()
{
    cout << FirstNamespace::number << endl;
    cout << SecondNamespace::number << endl;

    return 0;
}