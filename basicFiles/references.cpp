#include <iostream>
#include <vector>

using namespace std;

void swap(int& x, int& y) // Use & to directly reference variables to change actual values
{
    int temp = x;
    x = y;
    y = temp;
}

// CONST REFERENCES
// References prevent copies from being made, so can be used purely for efficiency when parameters are 
// very large variables like vectors. In this case, use const references to prevent values from being changed
void read_data(const string& fname, vector<float>& data)
{
    // fname is constant because it is not to be changed
    // data is not constant because it is to be changed
    // Do whatever code here
}

int main()
{
    int x, y;
    cout << "Enter two numbers to be swapped: ";
    cin >> x >> y;
    swap(x, y); // x and y are swapped around
    cout << x << " " << y << endl;
}