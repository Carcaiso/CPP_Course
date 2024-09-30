#include <iostream>

int main(int argc, char *argv[])
{
    const int min{10}, max{100};
    std::cout << "Enter a number between " << min << " and " << max << std::endl;

    int num{0};
    std::cin >> num;
    if (num >= min)
    {
        std::cout << num << " is greather equals than " << min << std::endl;
        int diff{num - min};
        std::cout << num << " is " << diff << " greater that " << min << std::endl;
        return 0;
    }

    if (num <= max)
    {
        std::cout << num << " is less equals than " << max << std::endl;
        return 0;
    }

    if (num <= max && num >= min)
    {
        std::cout << num << " is bwtween" << min << " and " << max << std::endl;
        return 0;
    }

    if (num == max || num == min)
    {
        std::cout << num << " is equal to " << min << " or " << max << std::endl;
        return 0;
    }
}