/*
First, I'd like you to declare two empty vectors of integers named vector1

and vector2, respectively.

Then add 10 and 20 to vector1 dynamically, using the pushback method.

Display those two vector elements,

using the at method as well as the size using the size method.

Do the same thing for vector2, except we're going to add

100 and 200 this time.

Then I want you to declare an empty two-dimensional vector called vector2d.

Remember, a two-dimensional vector is a vector of vectors.

Then I want you to add vector1 to vector2d using pushback,

then add vector2 to vector2d using pushback as well.

Then display the elements in vector2d using the at method.

Now comes the interesting part. I want you to change

vector1's first element, using the at0 method.

And I want you to change it to a 1000.

Then i want you to display the elements in the 2d vector

again using the at method, just like you did before.

And then finally, display the elements in vector1.

Take a look at the results and see if it's what you expected,
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    vector<int> vector1{};
    vector<int> vector2{};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "First element of vector1: " << vector1.at(0) << endl;
    cout << "Second element of vector1: " << vector1.at(1) << endl;
    cout << "Size of vector1: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nFirst element of vector2: " << vector2.at(0) << endl;
    cout << "Seconf element of vector2: " << vector2.at(1) << endl;
    cout << "Size of vector2: " << vector2.size() << endl;

    vector<vector<int>> vector2d{};
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "\nVector2d first element: " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << "Vector2d seconf element " << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "\nVector2d first element: " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << "Vector2d seconf element " << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;
    cout << "Vector2d first element: " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
    cout << "Vector1d seconf element " << vector1.at(0) << endl;
}