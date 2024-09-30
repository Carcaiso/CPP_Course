#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::noboolalpha;

int main(int argc, char *argv[])
{
    int num{};
    const int lower{10}, upper{20};

    cout << boolalpha;

    // Determine if an entered int is between two other integers
    cout << "Enter an integer - the boundsare " << lower << " and " << upper << ":";
    cin >> num;

    bool within_bounds{false};

    within_bounds = num > lower && num < upper;
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    // Determine if an intered int is outside two other integers
    bool outside_bounds{false};
    outside_bounds = num < lower || num > upper;
    cout << num << " is outside " << lower << " or " << upper << ": " << outside_bounds << endl;

    // Determine ifan entered integer is axactly on the boundrary
    bool on_bounds{false};
    on_bounds = num == lower || num == upper;
    cout << num << " is on bound wich are " << lower << " and " << upper << ": " << on_bounds << endl;

    int x = 10, y = 10, z = 6;
    cout << noboolalpha;
    cout << "\n"
         << (x == y) << endl;
}