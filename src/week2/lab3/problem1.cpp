#include <iostream>
using namespace std;

int main() {
    char color;
    cout << "Enter traffic light: ";
    cin >> color;

    if (color == 'g')
        cout << "Go!" << endl;
    else if (color == 'y')
        cout << "Get ready!" << endl;
    else if (color == 'r')
        cout << "Stop" << endl;
    else
        cout << "Invalid input" << endl;

    return 0;
}
