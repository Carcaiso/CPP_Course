#include <iostream>

using std::cout;
using std::endl;

int age{28}; // Global variable
int main(int argc, char *argv[])
{
    int age{18}; // Local variable
    cout << age << endl;

    return 0;
}   