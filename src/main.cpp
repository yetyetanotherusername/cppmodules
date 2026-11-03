import std;
import hello;
import world;

int main (int argc, char* argv[])
{
    std::println ("{} {}", Hello::get(), World::get());
    return 0;
}
