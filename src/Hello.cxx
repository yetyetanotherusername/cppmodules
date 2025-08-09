module;

#include <string>

export module hello;

export struct Hello
{
    static std::string get() { return "Hello "; }
};
