#include <iostream>
#include <cmath>  // Header file for sqrt function

using namespace std;

int main()
{
    double number, sroot;

    cout << "Input a number : ";
    cin >> number;

    // sqrt() calculates the square root of a number
    sroot = sqrt(number);

    cout << "Square root of " << number
            << " is : " << sroot << endl;

    return 0;
}