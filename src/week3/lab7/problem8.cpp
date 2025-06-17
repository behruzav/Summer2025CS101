#include <iostream>
using namespace std;

int value = 10;

void fun() {
    int value = 5;
    cout << "Inside fun(): " << value << endl;
}

int main() {
    int value = 3;
    fun();
    cout << "Inside main(): " << value << endl;
    cout << "Global value: " << ::value << endl;
    return 0;
}