#include <iostream>
#include <string>

/*
    Frank's Carpet Cleaning Service
    Charges 30$ per room
    Sales tax rate is 6%
    Estimates are valid for 30days


    Prompt the user for the number of room they would like cleaned
    and provide an estimate such as:

    Estimare for carpet cleaning service:
    Number of rooms: 2
    Price per room: 30$
    Cost: $60
    Tax: $3,60
    ********************************
    Total estimate: $63,6
    This estimate is valid for 30 days
*/

using std::cin;
using std::cout;
using std::endl;

const float pricePerRoom{30.50};
const float salesTax{0.06};
const int estimateExpiry{30}; // Days

int main(int argc, char *argv[])
{
    cout << "Please entre the number of rooms: ";
    int numberOfRooms{0};
    cin >> numberOfRooms;

    cout << "Number of rooms: " << numberOfRooms << endl;
    cout << "Price per rooms: " << pricePerRoom << endl;
    cout << "Cost: $" << numberOfRooms * pricePerRoom << endl;
    cout << "Tax: $" << numberOfRooms * pricePerRoom * salesTax << endl;
    cout << "=====================" << endl;
    cout << "Total estimate: $" << (numberOfRooms * pricePerRoom) + (numberOfRooms * pricePerRoom * salesTax) << endl;
    cout << "Thies estimate is valid for " << estimateExpiry << " days" << endl;
}