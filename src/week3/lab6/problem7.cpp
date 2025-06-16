#include <iostream>
using namespace std;

void displayEven(int number) {
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 == 0)
            result = to_string(digit) + " " + result;
        number /= 10;
    }
    cout << result << endl;
}

int main() {
    int n;
    cin >> n;
    displayEven(n);
    return 0;
}
