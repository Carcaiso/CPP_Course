/*
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

It's much easier to understand the Letter Pyramid given examples.

If the user enters the string "ABC", then your program should display:

  A
 ABA
ABCBA
*/

#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::cout << "Enter a string: ";
    std::string user_string{};
    getline(std::cin, user_string);

    for (int i{0}; i < user_string.size(); ++i)
    {
        int position = user_string.size() - i;
        while (position > 0)
        {
            std::cout << " ";
            --position;
        }

        for (int j{0}; j <= i; ++j)
        {
            std::cout << user_string[j];
        }

        for (int j{i - 1}; j >= 0; --j)
        {
            std::cout << user_string[j];
        }

        std::cout << std::endl;
    }
    return 0;
}