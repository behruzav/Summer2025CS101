#include <iostream>
using namespace std;

int cubeOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    return sum;
}

bool isArmstrong(int number) {
    return number == cubeOfDigits(number);
}

int main() {
    int n;
    cin >> n;
    if (isArmstrong(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
