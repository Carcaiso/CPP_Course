#include <iostream>
#include <vector>

int main()
{
    // Multiplication table
    for (int num1{1}; num1 <= 10; ++num1)
    {
        for (int num2{1}; num2 <= 10; ++num2)
        {
            std::cout << num1 << "*" << num2 << "= " << num1 * num2 << std::endl;
        }

        std::cout << "----------------------" << std::endl;
    }

    // Histogram
    std::cout << "How many data items  do you have?";
    int num_items{};
    std::cin >> num_items;

    std::vector<int> data{};

    for (int i{0}; i < num_items; ++i)
    {
        std::cout << "Enter data items: " << std::endl;
        int data_item{};
        std::cin >> data_item;

        data.push_back(data_item);
    }

    for (auto item : data)
    {
        std::cout << "Data: " << item << std::endl;
    }

    std::vector<int> vec{1, 2, 3};
    int result{0};
    if (vec.size() >= 1)
    {
        for (int i{0}; i < vec.size(); ++i)
        {
            for (int j{i+1}; j < vec.size(); ++j)
            {
                result += vec[i] * vec[j];
                std::cout << "RESULT: " << result << std::endl;
            }
        }
    }

    std::cout << "RESULT: " << result << std::endl;
    return 0;
}