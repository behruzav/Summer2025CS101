#include <iostream>
using namespace std;

void updateMax(int x) {
    static int maxVal = INT_MIN;
    if (x > maxVal) maxVal = x;
    cout << "Max so far: " << maxVal << endl;
}

int main() {
    updateMax(5);
    updateMax(10);
    updateMax(3);
    return 0;
}