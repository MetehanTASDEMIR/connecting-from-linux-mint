#include <iostream>
using namespace std;

int main()
{
    int fTemp, cTemp;

    cout << "Input Temperature \"as Fahrenheit\" \n";
    cin >> fTemp;

    cTemp = (fTemp - 32) * 5 / 9;

    cout << fTemp << " Fahrenheit = "
         << cTemp << " Celcius" << endl;

         return 0;
}