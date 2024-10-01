#include <iostream>
#include <cstring> // For c-style string funcitons
#include <cctype>  // for charachter-based functions

int main(int argc, char *argv[])
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    std::cout << "Please enter your firt name: ";
    std::cin >> first_name;

    std::cout << "Please enter your last name: ";
    std::cin >> last_name;

    std::cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
    std::cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << std::endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    std::cout << "Your full name is " << full_name << std::endl;

    // std::cout << "------------------------------" << std::endl;
    // std::cout << "Enter your full name: ";
    // std::cin >> full_name;

    // std::cout << "Your full name is " << full_name << std::endl;

    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, 50);
    std::cout << "Your full name is " << full_name << std::endl;
    return 0;
}