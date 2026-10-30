#include <iostream>
using namespace std;

int main()
{
    int midterm, final;

    cout << "Enter the midterm grade : ";
    cin >> midterm;

    cout << "Enter the final grade : ";
    cin >> final;

    int average = (midterm + final) / 2;

    if (average >= 50)
        cout << "PASSED :)";
    else
        cout << "FAILED :(";
        
    return 0;
}