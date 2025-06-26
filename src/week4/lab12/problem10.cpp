#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int* ptr = arr;
    for (int i = 0; i < n; ++i)
        if (*(ptr + i) % 2 != 0)
            ++count;

    cout << count << endl;
    delete[] arr;
    return 0;
}