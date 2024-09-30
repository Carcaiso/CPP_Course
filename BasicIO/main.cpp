#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    cout << "Hello world" << endl;

    cout << "Hello";
    cout << "World" << endl;

    cout << "Hello world" << endl;
    cout << "Hello" << " world" << endl;
    cout << "Hello" << " world\n";
    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;

    cout << "Enter an integer:";
    cin >> num1;
    cout << "You entered " << num1 << endl;

    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "You entered " << num1 << " and " << num2 << endl;

    // Concatenate the input number
    cout << "Enter 2 integer separted with space: ";
    cin >> num1 >> num2;
    cout << "You entered " << num1 << " and " << num2 << endl;

    // Try with double
    cout << "Enter a double: ";
    cin >> num3;
    cout << "Your double is :" << num3 << endl;

    return 0;
}