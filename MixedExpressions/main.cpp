/*
    Ask the user to enter 3 integers
    Calculate the sumof that integers then
    calculate the average of the integers

    Display the 3 integers entered
    the sum of the 3 integers
    the average of the 3 integers
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    const int count{3};
    cout << "Please enter 3 integers: ";
    // int num1{0};
    // int num2{0};
    // int num3{0};

    int num1{0}, num2{0}, num3{0};

    cin >> num1 >> num2 >> num3;
    cout << "\nnum1: " << num1 << " num2: " << num2 << " num3: " << num3 << endl;

    int sum{0};
    sum = num1 + num2 + num3;
    cout << "Sum: " << sum << endl;

    double average{0.0};
    average = static_cast<double>(sum) / count; // In modern C++
    // average = static_cast<double>(sum) / count; in OLD C++
    cout << "Average: " << average << endl;
}