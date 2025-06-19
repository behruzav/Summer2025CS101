#include <iostream>
using namespace std;

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    if (b > 0)
        return a + multiply(a, b - 1);
    return -multiply(a, -b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int result = multiply(num1, num2);
    cout << result << endl;

    return 0;
}
