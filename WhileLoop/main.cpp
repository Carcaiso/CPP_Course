#include <iostream>

int main()
{
    std::cout << "Enter a positive integer - start the countdoen: ";
    int num{};
    std::cin >> num;

    while (num > 0)
    {
        std::cout << num-- << std::endl;
    }

    std::cout << "HAPPY NEW YEAR!!!";

    std::cout << "Enter a positive integer to count up to: ";
    int numTo{};
    std::cin >> numTo;

    int i{1};
    while (i <= numTo)
    {
        std::cout << i++ << std::endl;
    }

    int number{};

    std::cout << "Enter a numberr less than 100: ";
    std::cin >> number;

    while (number >= 100)
    {
        std::cout << "Enter a numberr less than 100: ";
        std::cin >> number;
    }

    bool done{false};
    int numb{};

    while (!done)
    {
        std::cout << "Enter a integer between  1 and 5: ";
        std::cin >> numb;
        if (numb <= 1 || numb >= 5)
            std::cout << "Out of range, try again" << std::endl;
        else
        {
            std::cout << "Thanks!" << std::endl;
            done = true;
        }
    }
    return 0;
}