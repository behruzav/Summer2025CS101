#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum1 = a+b;
    int sum2 = c+d;

    cout << "Sum of first pair: " << sum1 << endl;
    cout << "Sum of second pair: " << sum2 << endl;
    cout << "Is first sum1 < sum2? " << (sum1<sum2) << endl;
    cout << "Is first sum1 > sum2? " << (sum1>sum2) << endl;

    return 0;

}