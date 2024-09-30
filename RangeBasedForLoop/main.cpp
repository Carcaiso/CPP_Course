#include <iostream>
#include <vector>
#include <iomanip>

int main(int argc, char *argv[])
{
    int scores[]{10, 20, 30};

    for (int score : scores) // You can use auto instead int
        std::cout << score << std::endl;

    std::vector<double> temperatures{30, 31, 27, 29};
    double average_temp{};
    for (auto temp : temperatures)
        average_temp += temp;

    if (temperatures.size() > 0)
        average_temp /= temperatures.size();

    std::cout << std::fixed << std::setprecision(1);
    std::cout << average_temp << std::endl;

    for (auto val : {1, 2, 3, 4}) // You can initialize an array directly insideo of the for range loop
        std::cout << val << std::endl;

    for (auto c : "\nThis is a test")
        if (c != ' ')
            std::cout << c << std::endl;

    for (auto c : "\nThis is a test")
        if (c == ' ')
            std::cout << "\t";
        else
            std::cout << c << std::endl;
    return 0;
}