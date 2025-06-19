#include <iostream>
#include <iomanip>
using namespace std;

double seriesSum(int n) {
    if (n == 1)
        return 1.0;
    return 1.0 / (n * n) + seriesSum(n - 1);
}

int main() {
    int n;
    cin >> n;

    double result = seriesSum(n);
    cout << fixed << setprecision(6);
    cout <<result << endl;

    return 0;
}