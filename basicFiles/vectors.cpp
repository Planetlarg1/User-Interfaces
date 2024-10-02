#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> a; // Creates empty dynamic vector a
    vector<int> b(10); // Creates empty vector b size 10
    vector<int> c(5, -1); // Creates vector c size 10 with initial values -1
    vector<int> d(c); // Creates copy vector of c

    vector<string> p; // Creates empty dynamic vector p
    vector<string> q(5, "xyz"); // Creates vector q size 5 with initial values xyz

    // USING VECTORS

    vector<string> words;

    words.push_back("Apple"); // Append
    words.push_back("Banana");
    words.push_back("Kiwi");
    cout << words.size() << endl; // Length

    cout << words[1] << endl; // Indexing
    cout << words.at(1) << endl;

    words.pop_back(); // Removing (doesn't output)
    cout << words.size() << endl;

    words.clear(); // Delete
}