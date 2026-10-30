#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;
int globalValue = 5;

void subProgram()
{
    cout << "This is a subprogram." << endl;
}

int main()
{
    int x = 10;
    float y = 2.5;

    //statements
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    subProgram();
    return 0;
}    