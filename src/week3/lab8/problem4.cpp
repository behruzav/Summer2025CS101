#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int number;
    cin >> number;

    int result = sumOfDigits(number);
    cout << result << endl;

    return 0;
}
