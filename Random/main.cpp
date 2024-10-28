#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime>   // required for time()

int main()
{
    int random_number{};
    std::size_t count{10}; // Random number to generate
    int min{1};
    int max{6};

    // Seed the random number generator
    // if you don't seed the generator you will get the same squance random numbers every run

    std::cout << "RAND_MAX on my system is: " << RAND_MAX << std::endl;
    srand(time(nullptr));

    for (std::size_t i{1}; i <= count; ++i)
    {
        random_number = rand() % max + min;
        std::cout << random_number << std::endl;
    }
    return 0;
}