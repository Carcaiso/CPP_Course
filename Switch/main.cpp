#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Enter the letter grade you expect on the exam: ";
    char letter_grade{};
    std::cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        std::cout << "You need  a 90 or above, study hard!" << std::endl;
        break;
    case 'b':
    case 'B':
        std::cout << "You need  a 80-89, go study!" << std::endl;
        break;
    case 'c':
    case 'C':
        std::cout << "You need  a 70-79 for an average grade!" << std::endl;
        break;
    case 'd':
    case 'D':
        std::cout << "All you need is 60-69" << std::endl;
        break;
    case 'f':
    case 'F':
    {
        std::cout << "Are you sure?(y/n)" << std::endl;
        char confirm{};
        std::cin >> confirm;
        if (confirm == 'Y' || confirm == 'y')
            std::cout << "Ok, i guess you didn't study...";
        else if (confirm == 'n' || confirm == 'N')
            std::cout << "Ok, go study...";
        break;
    }
    default:
        std::cout << "That's a not valid grade" << std::endl;
        break;
    }
}