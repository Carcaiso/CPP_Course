#include <iostream>

int main(int argc, char *argv[])
{
    enum Direction // Declare a new type of variable
    {
        left,
        right,
        up,
        down
    };

    Direction heading{down};

    switch (heading)
    {
    case left:
        std::cout << "Going left: " << left << std::endl;
        break;
    case right:
        std::cout << "Going right: " << right << std::endl;
        break;
    case up:
        std::cout << "Going up: " << up << std::endl;
        break;
    case down:
        std::cout << "Going down: " << down << std::endl;
        break;
    }

    return 0;
}