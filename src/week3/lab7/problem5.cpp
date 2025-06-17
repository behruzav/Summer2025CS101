#include <iostream>
using namespace std;

void power_two(int &x) {
    x = x * x;
}

int main() {
    int a = 6;
    power_two(a);
    cout << "a squared: " << a << endl;
    return 0;
}