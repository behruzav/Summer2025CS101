#include <iostream>
using namespace std;

int getCentury(int year) {
    return (year + 99) / 100;
}

int main() {
    int year;
    cin >> year;
    cout << getCentury(year) << endl;
    return 0;
}