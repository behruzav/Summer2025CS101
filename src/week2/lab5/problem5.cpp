#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cin >> num;
    while (num>0) {
        sum = sum + num%10;
        num = num/10;
    }
    cout << "The sum of digits is " << sum << endl;
    return 0;
}