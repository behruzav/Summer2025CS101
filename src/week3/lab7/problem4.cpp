#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a = 7, b = 12;
    swap(a, b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
