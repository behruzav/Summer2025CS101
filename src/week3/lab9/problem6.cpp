#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n=";
    cin >> n;
    char arr[n];
    int upper = 0, lower = 0, digit = 0, special = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (isupper(arr[i])) upper++;
        else if (islower(arr[i])) lower++;
        else if (isdigit(arr[i])) digit++;
        else special++;
    }

    cout << "Uppercase:" << upper << endl;
    cout << "Lowercase:" << lower << endl;
    cout << "Digit:" << digit << endl;
    cout << "Special:" << special << endl;

    return 0;
}