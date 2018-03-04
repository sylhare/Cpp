#include <iostream>
using namespace std;

int main()
{
    float a;
    float surface_area,volume;

    cout << "Enter size of any side of a cube : ";
    cin >> a;

    surface_area = 6 * (a * a);
    volume = a * a * a;

    cout << "Surface area of cube is:" << surface_area;
    cout << "\n Volume of cube is : " << volume;

    return 0;
}