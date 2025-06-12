#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num, max;
    cin >> max;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cout << "Max is " << max << endl;
    return 0;
}