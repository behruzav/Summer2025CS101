#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    int maxG = INT_MIN, minG = INT_MAX, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
        maxG = max(maxG, grades[i]);
        minG = min(minG, grades[i]);
        sum += grades[i];
    }
    cout << "Minimum=" << minG << endl;
    cout << "Maximum=" << maxG << endl;
    cout << "Average=" << (double)sum / n;
    return 0;
}