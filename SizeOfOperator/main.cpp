#include <iostream>
#include <climits> // THis is just for int

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout << "sizeof info: " << endl;
    cout << "*************************" << endl;

    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "usnigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long) << " bytes" << endl;

    cout << "*************************" << endl;

    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;

    cout << "*************************" << endl;

    cout << "Minimum values: " << endl;
    cout << "char: " << CHAR_MIN << " bytes" << endl;
    cout << "int: " << INT_MIN << " bytes" << endl;
    cout << "short: " << SHRT_MIN << " bytes" << endl;
    cout << "long: " << LONG_MIN << " bytes" << endl;
    cout << "long long: " << LONG_LONG_MIN << " bytes" << endl;

    cout << "*************************" << endl;

    cout << "Maximum values: " << endl;
    cout << "char: " << CHAR_MAX << " bytes" << endl;
    cout << "int: " << INT_MAX << " bytes" << endl;
    cout << "short: " << SHRT_MAX << " bytes" << endl;
    cout << "long: " << LONG_MAX << " bytes" << endl;
    cout << "long long: " << LONG_LONG_MAX << " bytes" << endl;

    cout << "*************************" << endl;

    cout << "Sizeof using variable name: " << endl;
    int age{21};
    cout << "age is: " << sizeof(age) << " bytes" << endl;
    // or
    cout << "age is: " << sizeof age << " bytes" << endl;

    double wage{22.24};
    cout << "wage is: " << sizeof(wage) << " bytes" << endl;
    // or
    cout << "wage is: " << sizeof wage << " bytes" << endl;
    
}