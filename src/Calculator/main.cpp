/*
 *  Calculator v1.0
 *  Generated: 2018-03-09 10:42:56.285649
 *  ----------------------------------------------------------
 *
 *  Distributed under the MIT Software License.
 *  (See accompanying file LICENSE)
 */
#include <iostream>
#include "math.h"
#include "global.hpp"

using namespace std;

void title()
{
    cout << CALCULATOR;
}

void printValue(double a, string value, string operation)
{
    cout << operation << "\n " << value << ": " << a;
}

void printValues(int a, int b, string operation)
{
    printValue(a, "a", operation);
    cout << " and b: " << b << '\n';
}

void print(string s)
{
    cout << s << '\n';
}

int main()
{
    int a(2), b(0);
    double c;
    title();

    cout << "This is the 'lame' calculator \nEnter a number: ";
    cin >> a;
    cout << "And another one: ";
    cin >> b;

    printValues(a, b, "\n---\n\n- Your input:");

    b = addTwo(b);
    a = addTwo(a);
    printValues(a, b, "- Add two:");

    cout << "- Power " << a << "^"<< b << ": \n";
    cout << " c:" << powaa(a, b) << "\n";

    c = multiply(a, b);


    return 0;
}
