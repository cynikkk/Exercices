#include <iostream>
#include "Fraction.h"

int main()
{   
    Fraction a(4, 5), b(2), c, d;

    c = a + b;
    d = a * b;

    std::cout << a << " + " << b << " = " << c << std::endl;
    std::cout << a << " * " << b << " = " << c << std::endl;

    if(a > b)
        std::cout << "a est plus grand que b." << std::endl;
    else if(a == b)
        std::cout << "a est egal a b." << std::endl;
    else
        std::cout << "a est plus petit que b." << std::endl;

    /*
        4/5 + 2 = 14/5
        4/5 * 2 = 8/5
        a est plus petit que b.
    */

    return 0;
}