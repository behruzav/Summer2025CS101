#include <iostream>
using namespace std;

int find_element(int array[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int n, target;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "Find:";
    cin >> target;
    cout << find_element(arr, n, target);
    return 0;
}