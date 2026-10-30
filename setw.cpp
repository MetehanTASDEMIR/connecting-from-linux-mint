# include <iostream>
# include <iomanip>  // Header file for setw()

using namespace std;

int main()
{
    long A = 1234567, B = 123, C = 2345;

    cout << "A" << setw(10) << A << endl;
    cout << "B" << setw(10) << B << endl;
    cout << "C" << setw(10) << C << endl;

    return 0;
}