#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
    std::cout << "Enter a number (double): ";
    double num{};

    std::cin >> num;

    std::cout << "The sqrt of " << num << " is: " << sqrt(num) << std::endl;
    std::cout << "The cubed root of " << num << " is: " << cbrt(num) << std::endl;
    std::cout << "The sin of " << num << " is: " << sin(num) << std::endl;
    std::cout << "The cosin of " << num << " is: " << cos(num) << std::endl;
    std::cout << "The ceil of " << num << " is: " << ceil(num) << std::endl;
    std::cout << "The floor of " << num << " is: " << floor(num) << std::endl;
    std::cout << "The round of " << num << " is: " << round(num) << std::endl;

    std::cout << "\nEnter a power to raise " << num << " to: ";
    double power{};
    std::cin >> power;
    std::cout << "Raised to the " << power << " power is: " << pow(num, power);
    return 0;
}