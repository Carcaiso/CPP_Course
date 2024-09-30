#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    /************************************
     * Character type
     ***********************************/

    char middleInitial{'j'}; // Notice the single quotes atound charachters
    cout << "My middle intital is: " << middleInitial << endl;

    /************************************
     * Integer type
     ***********************************/

    unsigned short int examScore{55}; // Same as unsigned short examScore{55}
    cout << "My score id: " << examScore << endl;

    int countriesRepresented{65};
    cout << "There are " << countriesRepresented << " in my city" << endl;

    long peopleInFlorida{20'610'000};
    cout << "THere are about " << peopleInFlorida << " people in florida" << endl;

    long long peopleOnEarth{7'600'000'000}; // this ' used in c++14 or plus just for better view for large number
    cout << "There are " << peopleOnEarth << " on earth" << endl;

    /************************************
     * Floating point type
     ***********************************/
    float carPayment{402.23};
    cout << "My car payment is: " << carPayment << endl;

    double pi{3.1425};
    cout << "Pi is " << pi << endl;

    long double largeAmount{2.7e120};
    cout << largeAmount << "is a very big number" << endl;

    /************************************
     * Boolean type
     ***********************************/

    bool gameOver{false};
    cout << "The value of game is " << gameOver << endl;

    /************************************
     * Overflow example
     ***********************************/
    short value1{3000};
    short value2{1000};
    short product{value1 * value2}; // narrowing conversion of ‘(((int)value1) * ((int)value2))’ from ‘int’ to ‘short int’ [-Wnarrowing]

    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;
    return 0;
}