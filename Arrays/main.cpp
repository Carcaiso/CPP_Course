#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    char vowels[5]{'a', 'e', 'i', 'o', 'u'};                // Declare and initialize array
    cout << "\nThe first vowels is: " << vowels[0] << endl; // Get first element of array
    cout << "THe last vowels is:" << vowels[4] << endl;

    // cin >> vowels[5]; OUT OF BOUND
    // There are no bound control. The last index of array is 4,
    //  if i insert an element in index 5 the input will be save in the next cell of memory overwriting what was saved on that specific cell
    //  causing an unexpected result (program crasg or something else)

    double hiTemps[]{90.1, 89.9, 77.5, 81.6};
    cout << "The first high temperature is: " << hiTemps[0] << endl;

    hiTemps[0] = 100.7; // Set the new first element
    cout << "Now the first element is: " << hiTemps[0] << endl;

    int testScore[5]; // If twe don't initalize array, for each index we'll take garbage value memory
    cout << "\nFirst score: " << testScore[0] << endl;
    cout << "Second score: " << testScore[1] << endl;
    cout << "Third score: " << testScore[2] << endl;
    cout << "Fourth score: " << testScore[3] << endl;
    cout << "Fifth score: " << testScore[4] << endl;

    int testScoreInitialize[5]{};
    cout << "\nFirst score: " << testScoreInitialize[0] << endl;
    cout << "Second score: " << testScoreInitialize[1] << endl;
    cout << "Third score: " << testScoreInitialize[2] << endl;
    cout << "Fourth score: " << testScoreInitialize[3] << endl;
    cout << "Fifth score: " << testScoreInitialize[4] << endl;

    cout << "\nEnter 5 test score: ";
    cin >> testScore[0] >> testScore[1] >> testScore[2] >> testScore[3] >> testScore[4];

    cout << "\nFirst score: " << testScore[0] << endl;
    cout << "Second score: " << testScore[1] << endl;
    cout << "Third score: " << testScore[2] << endl;
    cout << "Fourth score: " << testScore[3] << endl;
    cout << "Fifth score: " << testScore[4] << endl;

    cout << "THe value of the array is: " << testScore << endl;
}
