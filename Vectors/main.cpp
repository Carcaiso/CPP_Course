#include <iostream>
#include <vector> // Manadatory for use vector

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    // vector<char> vowels; empty initialization
    // vector<char> vowels(5); 5 elements intialized to zero
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    // vector <int> test_score(3) 3 elements initialized to zero
    // vector <int> test_score(3,100) 3 element intialized to zero

    /*VECTOR SYNTAX*/
    vector<int> test_score{100, 99, 98};

    cout << "\nTest score using array syntax: " << endl;
    cout << test_score[0] << endl;
    cout << test_score[1] << endl;
    cout << test_score[2] << endl;

    cout << "\nTest score using vector syntax: " << endl;
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;
    cout << "\nThere are " << test_score.size() << " scores in vector" << endl;

    // cout << test_score.at(10) << endl; // provide ubounc check -> return error

    cout << "\nChange some test scores: ";
    cin >> test_score.at(0);
    cin >> test_score.at(1);
    cin >> test_score[2];
    cout << test_score.at(0) << endl;
    cout << test_score.at(1) << endl;
    cout << test_score.at(2) << endl;

    // 2D Vector
    vector<vector<int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {1, 3, 3, 5}};

    cout << "\nHere are the movie  rating for reviwer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie reating for reviewr #1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
}
