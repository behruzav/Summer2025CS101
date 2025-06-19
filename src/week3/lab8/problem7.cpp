#include <iostream>
#include <string>
using namespace std;

string digitToWord(int digit) {
    switch (digit) {
        case 0: return "zero";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

void numberToWords(int number) {
    if (number == 0)
        return;

    numberToWords(number / 10);
    cout << digitToWord(number % 10) << " ";
}

int main() {
    int number;
    cin >> number;
    if (number == 0) {
        cout << "Zero";
    } else {
        numberToWords(number);
        cout << endl;
    }
    return 0;
}


