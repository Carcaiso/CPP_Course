#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// The program will calculate the area of a room in sqaure feet
int main(int argc, char *argv[])
{
    // int age; this is uninitialized
    // 3 way to initialize variable:
    // int age = 0;
    // int age (0);
    // int age{20}; // best practice method

    cout << "Enter the width of the room: ";
    int roomWidth{0}; // Always initialize variable and closed to  where it used
    cin >> roomWidth;

    cout << "Enter the lenght of the room: ";
    int rooomLength{0};
    cin >> rooomLength;

    cout << "The area of the room is: " << roomWidth * rooomLength << " square feet" << endl;

    return 0;
}