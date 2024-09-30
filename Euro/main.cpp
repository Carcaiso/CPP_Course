#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    const double usd_per_eur{1.19};
    cout << "Welcome to the EUR to USD converter " << endl;
    cout << "Enter the value in EUR: ";

    double euros{0.0};
    cin >> euros;

    double dollars{0.0};
    dollars = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;
}