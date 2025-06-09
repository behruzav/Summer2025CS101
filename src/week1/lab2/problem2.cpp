#include <iostream>
using namespace std;

int main() {
    double x, y, t;
    cin >> x >>y;
    t = 3*(x * x + 3) / (y/4+3);

    cout << "t=" << t << endl;
    return 0;
}