#include "simplex-lib/simplex-lib.hpp"
using namespace simplex;

/*#include <iostream>

void display(char* text)
{
    std::cout << text << std::endl;
}

int main()
{
    simplex::Thread<char*> hello(&display);

    hello.start("hello");
    hello.start("world");
    int total = hello.timesRun;

    return 0;
}*/

/*#include <iostream>

void displayHello()
{
    std::cout << "hello" << std::endl;
}

void displayWorld()
{
    std::cout << "world" << std::endl;
}

class testing : public simplex::SupportsSignals
{
    public:
    simplex::Signal<> signal;
    testing() : signal(this){}
};

int main()
{
    testing test{};
    test.signal.connect(&displayHello);
    test.signal.connect(&displayWorld);
    test.signal.emit();
    return 0;
}*/

/*

int main()
{
    simplex::Dictionary<simplex::string, simplex::string> test{};
    test.add("Test1", "Testing");
    test.add("Test2", "Yet Another");

    simplex::Array<simplex::string> keys = test.keys();
    size_t hash1 = keys[0].getHash();
    size_t hast2 = keys[1].getHash();

    simplex::Dictionary<int, int> test2{};
    test2.add(1, 2);
    return 0;
}*/

int main()
{
    Socket socket{"172.217.4.100", 80};
    socket.send("GET / HTTP/1.1\r\n\r\n");
    Console::Write(socket.receive());
}