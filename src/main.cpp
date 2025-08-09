
#include <iostream>

import hello;
import world;

int main (int argc, char* argv[])
{
    std::cout << Hello::get() << World::get() << std::endl;
    return 0;
}
