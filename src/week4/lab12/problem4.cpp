#include <iostream>
#include <iomanip>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int count = 0, num = 2;
    while (count < 50) {
        if (num % 2 == 0 && isPalindrome(num)) {
            cout << setw(5) << num;
            ++count;
            if (count % 5 == 0) cout << endl;
        }
        ++num;
    }
    return 0;
}