#include <iostream>
using namespace std;

void fun(double a, double b){
    double perimeter = 2*(a+b);
    double area = a*b;
    cout << "Perimeter is " << perimeter << endl;
    cout << "Area is " << area << endl;
}

int main() {
    double a, b;
    cin >> a >>  b;
    fun(a, b);

    return 0;
}
