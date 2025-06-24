#include <iostream>
using namespace std;

int main() {
    const int SIZE=1;
    float *ptr, arr[SIZE];

    ptr = arr;

    for (int i = 0; i < SIZE; i++) {
        float grade;
        cin >> grade;
        *(ptr + i) = grade * 0.3;
    }
    for (int i = SIZE -1; i >= 0; --i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    return 0;
}
