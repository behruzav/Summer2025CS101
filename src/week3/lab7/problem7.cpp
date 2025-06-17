#include <iostream>
using namespace std;

void reverseDigits(int &x) {
    int num = x, rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    x = rev;
}

int main() {
    int x = 10012;
    reverseDigits(x);
    cout << "Reversed: " << x << endl;
    return 0;
}