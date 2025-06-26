#include <iostream>
using namespace std;


int main() {
    int height;
    cin >> height;
    if (height == 0)
        cout << "The depth is 0" << endl;
    else {
        for (int i = 1; i <= height; ++i) {
            for (int j = 0; j < i; ++j)
                cout << i;
            cout << endl;
        }
    }
    return 0;
}
