#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    double* ptr = &x;

    cout << "Address of variable: " << &x << endl;
    cout << "Address of pointer: " << &ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;

    return 0;
}