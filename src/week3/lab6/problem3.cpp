#include <iostream>
using namespace std;

void fun(double r){
    double circumference = 2 * 3.14 * r;
    double area = 3.14 * r * r;
    cout << "Circumference is " << circumference << endl;
    cout << "Area is " << area << endl;
}

int main() {
    double r;
    cin >> r;
    fun(r);

    return 0;
}