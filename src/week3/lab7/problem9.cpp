#include <iostream>
using namespace std;

void print_numbers(int n) {
    if (n == 0) return;
    print_numbers(n - 1);
    cout << n << " ";
}

int main() {
    print_numbers(5);
    cout << endl;
    return 0;
}