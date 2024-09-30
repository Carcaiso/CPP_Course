#include <iostream>


// Enter your favorite number between 1 to 100
int main(){
    // Declare int variable
    int favorite_number;
    // Print the message on the standard output 
    std::cout << "Enter yout favorite number between 1 and 100:";
    // Get the user input and store it in to the variable "favorite_number" 
    std::cin >> favorite_number;
    // Print a message to respond to the user. Flash the buffer and print aout the next line
    std::cout << "Amazing number, that's my favorite to!" << std::endl;
    // If everything is ok, return 0
    return 0;
}