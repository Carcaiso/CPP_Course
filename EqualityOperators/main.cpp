#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{0}, num2{0};

    cout << "Enter 2 integers: ";
    cin >> num1 >> num2;
    equal_result = num1 == num2;
    not_equal_result = num1 != num2;
    cout << boolalpha; // Print true/false instead of 0/1
    cout << "Comparison result (equals):  " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    char char1{}, char2{};
    cout << "Enter 2 char: ";
    cin >> char1 >> char2;
    equal_result = char1 == char2;
    not_equal_result = char1 != char2;
    cout << "Comparison result (equals):  " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    int num3{0};
    double num4{0.0};
    cout << "Enter 1 integer and 1 double: ";
    cin >> num3 >> num4;
    equal_result = num3 == num4; // Remember, in this case the int will be promoted to double
    not_equal_result = num3 != num4;
    cout << "Comparison result (equals):  " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
}