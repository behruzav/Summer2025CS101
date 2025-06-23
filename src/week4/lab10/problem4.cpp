#include <iostream>
using namespace std;

const int SIZE = 4;

double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; ++i)
        sum += m[i][i];
    return sum;
}

int main() {
    double m[SIZE][SIZE];
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> m[i][j];
    cout << sumMajorDiagonal(m) << endl;
    return 0;
}