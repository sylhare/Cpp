#include <iostream>
#include "math.h"

using namespace std;

void helloworld()
{
    cout << "Hello world!" << endl;
}

void printValue(int a, int b)
{
    cout << "- a: " << a;
    cout << " and b: " << b << endl;
}

int main()
{
    int a(2), b(2);

    helloworld();
    printValue(a, b);
    b = addTwo(a);
    printValue(a, b);

    return 0;
}
