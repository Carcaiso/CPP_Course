#include <iostream>

/*
    Frank's Carpet Cleaning Service
    Charges:
        - 25$ per smal room
        - 35$ per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days


    Prompt the user for the number of room they would like cleaned
    and provide an estimate such as:

    Estimare for carpet cleaning service:
    Number of smal rooms: 3
    Number of large rooms: 1
    Price per smal rooms: 25$
    Price per large rooms: 35$
    Cost: $11'
    Tax: $6.60
    ********************************
    Total estimate: $116.6
    This estimate is valid for 30 days
*/

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout << "Frank's Carpet Cleaning Service" << endl;
    cout << "\nPlease insert the number of small rooms: ";
    int smallRooms{0};
    cin >> smallRooms;
    cout << "Please insert the number of large rooms: ";
    int largeRooms{0};
    cin >> largeRooms;

    const double pricePerSmallRoom{25};
    const double pricePerLargeRoom{35};
    const double salesTax{0.06};
    const int estimateTime{30}; // Days

    cout << "\nEstimate for carpet cleaning service: " << endl;
    cout << "Number of small rooms: " << smallRooms << endl;
    cout << "Number of large rooms: " << largeRooms << endl;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;

    double cost = (pricePerLargeRoom * largeRooms) + (pricePerSmallRoom * smallRooms);
    cout << "Cost: $" << cost << endl;

    double tax = cost * salesTax;
    cout << "Tax: $" << tax << endl;

    cout << "************************************" << endl;
    cout << "Total estimate: $" << cost + tax << endl;

    cout << "This estimate is valid for " << estimateTime << endl;
}