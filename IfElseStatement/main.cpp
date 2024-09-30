#include <iostream>

int main()
{
    const int target{10};

    std::cout << "Enter a number and i'll compare it to " << target << ": ";

    int num{};
    std::cin >> num;

    if (num >= target)
    {
        std::cout << "Is equal or greater than " << target << std::endl;
    }
    else
    {
        std::cout << "Is less than " << target << std::endl;
    }
}