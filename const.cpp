#include <iostream>
using namespace std;

int main()
{
    float radius;
    const float PI=3.14159F;

    float area;

    cout << "Radius of circle : ";
    cin >> radius;

    area =  PI * radius * radius;
    //float area = PI * radius * radius;

    cout << "Area of circle : " << area << endl;

    return 0;
}
    