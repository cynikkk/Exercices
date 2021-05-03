#include <iostream>
#include "Duration.h"

int main()
{
    Duration one(0, 0, 1), two(0, 10, 28);

    if (one > two)
        std::cout << "One < two\n";
    else
        std::cout << "One > two\n";

    return 0;
}