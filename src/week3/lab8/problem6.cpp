#include <iostream>
#include <string>
using namespace std;

template <typename T>
void compareValues(T a, T b) {
    if (a>b)
        cout << "The largest is: " << a << endl;
    else if (a<b)
        cout << "The largest is: " << b << endl;
    else
        cout << "Values are equal" << endl;
}


template <typename T>
T middle(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c))
        return a;
    else if ((b > a && b < c) || (b < a && b > c))
        return b;
    else
        return c;
}


template <typename T>
double average(T a, T b) {
    return (static_cast<double>(a) + static_cast<double>(b)) / 2.0;
}

int main() {
    cout << "=== compareValues ===" << endl;
    compareValues(10, 20);
    compareValues(string("hi"), string("hi"));
    compareValues('b', 'a');

    cout << "\n=== middle ===" << endl;
    cout << "Middle of (3, 7, 5): " << middle(3, 7, 5) << endl;
    cout << "Middle of (2.5, 1.1, 4.8): " << middle(2.5, 1.1, 4.8) << endl;

    cout << "\n=== average ===" << endl;
    cout << "Average of 4 and 8: " << average(4, 8) << endl;
    cout << "Average of 5.5 and 2.5: " << average(5.5, 2.5) << endl;

    return 0;
}