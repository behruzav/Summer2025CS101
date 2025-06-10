#include <iostream>
using namespace std;

int main() {
    double weight;
    cin >> weight;

    if (weight <= 0)
        cout << "Invalid input." << endl;
    else if (weight > 20)
        cout << "The package cant be shiped." << endl;
    else if (weight <= 2)
        cout << "Cost: 3500" << endl;
    else if (weight <= 3)
        cout << "Cost: 5500" << endl;
    else if (weight <= 5)
        cout << "Cost: 8500" << endl;
    else if (weight <= 8)
        cout << "Cost: 10500" << endl;
    else
        cout << "Cost: 15000" << endl;

    return 0;
}
