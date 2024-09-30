#include <iostream>
#include <vector>

int main()
{
    for (int i{1}; i <= 10; ++i)
        std::cout << i << std::endl;

    for (int i{1}; i <= 10; i += 2)
        std::cout << i << std::endl;

    for (int i{10}; i >= 0; --i)
        std::cout << i << std::endl;

    for (int i{10}; i <= 100; i += 10)
    {
        if (i % 15 == 0)
            std::cout << i << std::endl;
    }

    for (int i{1}, j{5}; i <= 5; ++i, ++j)
        std::cout << i << "+" << j << "=" << (j + i) << std::endl;

    for (int i{1}; i <= 100; ++i)
    {
        std::cout << i;
        if (i % 10 == 0)
            std::cout << std::endl;
        else
            std::cout << " ";
    }

    for (int i{1}; i <= 100; ++i)
    {
        std::cout << i;
        std::cout << ((i % 10 == 0) ? "\n" : " ");
    }

    std::vector<int> nums{
        1,
        2,
        3,
        4,
        5,
        6,
    };

    for (int i{0}; i < nums.size(); ++i) // size of return an unisgned int, so if you wanto to avoi warning in termoinal, declare usigned int i{0}
        std::cout << nums[i] << std::endl;

    return 0;
}