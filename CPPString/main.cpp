#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char *argv[])
{
    std::string s0;
    std::string s1{"Apple"};
    std::string s2{"Banana"};
    std::string s3{"KIwi"};
    std::string s4{"apple"};
    std::string s5{s1};
    std::string s6{s1, 0, 3}; // App
    std::string s7(10, 'x');

    std::cout << s0 << std::endl; // NO garbage because string is a object
    std::cout << s0.length() << std::endl;

    // Initialization
    std::cout << "----------------------------" << std::endl;
    std::cout << "s1 is initialized to: " << s1 << std::endl;
    std::cout << "s1 is initialized to: " << s2 << std::endl;
    std::cout << "s2 is initialized to: " << s3 << std::endl;
    std::cout << "s3 is initialized to: " << s4 << std::endl;
    std::cout << "s4 is initialized to: " << s5 << std::endl;
    std::cout << "s5 is initialized to: " << s6 << std::endl;
    std::cout << "s6 is initialized to: " << s7 << std::endl;

    // Comparison
    std::cout << "----------------------------" << std::endl;
    std::cout << std::boolalpha;

    std::cout << "s1 == s5 :" << (s1 == s5) << s1 << std::endl;
    std::cout << "s1 == s2 :" << (s1 == s2) << std::endl;
    std::cout << "s1 == s2: " << (s1 != s2) << std::endl;
    std::cout << "s1 > s2: " << (s1 > s2) << std::endl;
    std::cout << "s2 < s1: " << (s2 < s1) << std::endl;
    std::cout << "s4 < s1: " << (s4 > s1) << std::endl;

    // Assignment
    std::cout << "----------------------------" << std::endl;
    s1 = "Watermelon";
    std::cout << "s1 is now: " << s1 << std::endl;
    s2 = s1;
    std::cout << "s2 is now: " << s2 << std::endl;
    s3 = "Frank";
    std::cout << "s3 is now: " << s3 << std::endl;
    s3[0] = 'C';
    std::cout << "s3 first letter is changed to C: " << s3 << std::endl;
    s3.at(1) = 'P';
    std::cout << "s3 second letter is changed to C: " << s3 << std::endl;

    // Concatenation
    std::cout << "----------------------------" << std::endl;
    s3 = "Watermelon";
    s3 = s5 + " and " + s2 + " juice";
    std::cout << "s3 is now: " << s3 << std::endl;

    // For loop
    std::cout << "----------------------------" << std::endl;
    s1 = "Apple";
    for (std::size_t i{0}; i < s1.length(); ++i)
    {
        std::cout << s1[i];
    }

    std::cout << std::endl;

    // Range based loop
    std::cout << "----------------------------" << std::endl;
    for (char c : s1)
        std::cout << c;
    std::cout << std::endl;

    // Substring
    std::cout << "----------------------------" << std::endl;

    s1 = "This is a test";

    std::cout << s1.substr(0, 4) << std::endl;  // This
    std::cout << s1.substr(5, 2) << std::endl;  // is
    std::cout << s1.substr(10, 4) << std::endl; // test

    // Erase
    std::cout << "----------------------------" << std::endl;
    s1 = "This is a test";
    s1.erase(0, 5); // is a test
    std::cout << "s1 is now: " << s1 << std::endl;

    // Clear
    std::cout << "----------------------------" << std::endl;
    s1 = "This is a test";
    std::cout << "s1 before clear: " << s1 << std::endl;
    s1.clear();
    std::cout << "s1 after clear: " << s1 << std::endl;

    // Getline
    std::cout << "----------------------------" << std::endl;
    std::string full_name{};

    std::cout << "Enter your full name: ";
    getline(std::cin, full_name);

    std::cout << "Your full name is: " << full_name << std::endl;

    // Find
    std::cout << "----------------------------" << std::endl;
    s1 = "The secret word is Boo";
    int tries{3};
    do
    {
        std::cout << "Enter the word to find: ";
        std::string word{};
        std::cin >> word;
        if (s1.find(word) != std::string::npos)
        {
            std::cout << "Congratulations, found it" << std::endl;
            tries = 0;
        }
        else
            std::cout << "Word no found. You  have " << --tries << " tries" << std::endl;
    } while (tries != 0);

    return 0;
}
