#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cout << "Enter x and y coords: ";
    cin >> x >> y;
    cout << "Your coords are: (" << x << ", " << y << ")\n";
    if (cin.fail()) { // cin.fail == 1 if input is incorrect, e.g. inputted string. Can also use if (cin >> x >> y){}
        cout << "cin failed\n";
    }
}