#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    // Conditional operator
    std::cout << ((num % 2 == 0) ? "is even" : "is odd") << std::endl;

    std::cout << "Enter a two integer: ";
    int num1{}, num2{};
    std::cin >> num1 >> num2;
    if (num1 != num2)
    {
        std::cout << "Largest: " << ((num1 > num2) ? num1 : num2) << std::endl;
        std::cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << std::endl;
    }
    else
        std::cout << " The number are different" << std::endl;
    return 0;
}