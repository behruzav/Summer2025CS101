#include <iostream>
using namespace std;

int main() {
    float diameter;
    cin  >> diameter;
    float radius = diameter/2;
    float PI = 3.14;
    float area = 4*PI*radius*radius;
    cout << "Area: " << area << endl;

    return 0;

}