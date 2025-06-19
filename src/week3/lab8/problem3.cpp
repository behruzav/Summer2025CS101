#include <iostream>
#include <iomanip>
using namespace std;

double customSeries(int n) {
    if (n == 1)
        return 1.0 / (1 * (1 + 2));
    return 1.0 / (n * (n + 2)) + customSeries(n - 1);
}

int main() {
    int n;
    cin >> n;

    double result = customSeries(n);
    cout << fixed << setprecision(6);
    cout << result << endl;

    return 0;
}