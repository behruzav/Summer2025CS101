#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++)
        sum += m[i][columnIndex];
    return sum;
}

int main() {
    int rows = 5;
    double m[5][SIZE];
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> m[i][j];

    for (int col = 0; col < SIZE; ++col)
        cout << "sum of column " << col << "=" << sumColumn(m, rows, col) << endl;

    return 0;
}
