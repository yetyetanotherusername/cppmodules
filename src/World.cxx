module;

#include <string>

export module world;

export struct World
{
    static std::string get() { return "World!"; }
};
