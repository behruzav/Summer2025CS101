#include <iostream>
using namespace std;

int Factorial(int n=0) {
    int fact = 1;
    for (int i = 1; i <= n; i++ )
        fact *= i;
    return fact;
}

int main() {
    int num;
    cin >> num;
    cout << "Factorial of " << num << " is " << Factorial(num) << endl;

    return 0;

}
