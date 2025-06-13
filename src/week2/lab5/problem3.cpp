#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        cout << "1/" << i;
        if (i != n) cout << " + ";
        sum = sum + 1.0/i;
    }
    cout << endl << "The sum is " << sum << endl;
    return 0;
}