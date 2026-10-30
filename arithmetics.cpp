#include <iostream>
using namespace std;

int main()
{
    int number = 27;

    number += 10;
    number -= 7;
    number *= 2;
    number /= 3;
    number %= 3;
    cout << number << endl;

    number = 10;

    cout << "Number = " << number << endl;
    cout << "Number = " << ++number << endl;
    cout << "Number = " << number << endl;
    cout << "Number = " << number++ << endl;
    cout << "Number = " << number << endl;

    return 0;
}