#include <iostream>
using namespace std;
int main()
{

    double base, height, area;
    cout << "Enter base : ";
    cin >> base;
    cout << "Enter heigt : ";
    cin >> height;
    area = (double)1 / 2 * base * height;
    cout << "Area of triangle=" << area;
}