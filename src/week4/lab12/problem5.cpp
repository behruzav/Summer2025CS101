#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printMatrix(int n) {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            cout << rand() % 1001 << "\t";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printMatrix(n);
    return 0;
}