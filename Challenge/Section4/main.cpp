#include <iostream>

int main(){
    int user_number;
    std::cout << "Enter your favorite number between 1 and 100:";
    std::cin >> user_number;
    std::cout << "Amazing!! That's my favourite number!" << std::endl;
    std::cout << "No really!! " << user_number << " is my favorite number!!" << std::endl;

    return 0;
}