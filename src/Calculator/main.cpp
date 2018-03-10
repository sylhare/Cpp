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
#include "print.hpp"

using namespace std;

void title()
{
    cout << "  ____           _                  _           _                  \n";
    cout << " / ___|   __ _  | |   ___   _   _  | |   __ _  | |_    ___    _ __ " << '\n';
    cout << "| |      / _` | | |  / __| | | | | | |  / _` | | __|  / _ \\  | '__|" << '\n';
    cout << "| |___  | (_| | | | | (__  | |_| | | | | (_| | | |_  | (_) | | |   " << '\n';
    cout << " \\____|  \\__,_| |_|  \\___|  \\__,_| |_|  \\__,_|  \\__|  \\___/  |_|   " << '\n';
    cout << '\n';

}

void printValue(int a, int b)
{
    cout << "- a: " << a;
    cout << " and b: " << b << '\n';
}

void print(string s)
{
    cout << s << endl;
}

int main()
{
    int a(2), b(0);
    double c;
    title();
    printValue(a, b);
    b = addTwo(a);
    printValue(a, b);
    c = logarithm(a, b);
    cout << "c: " << c << endl;
    print("allo");
    print(GLOBAL_CONST_VAR);

    return 0;
}
