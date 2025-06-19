#include <iostream>
#include <cmath>
using namespace std;

int octal2Dec(const int& octalNumber) {
    int decimalValue = 0, temp = octalNumber, power = 0;

    while (temp != 0) {
        int lastDigit = temp % 10;
        decimalValue += lastDigit * pow(8, power);
        temp /= 10;
        power++;
    }

    return decimalValue;
}

int main() {
    int octalInput;
    cin >> octalInput;

    int decimalOutput = octal2Dec(octalInput);
    cout << decimalOutput << endl;

    return 0;
}