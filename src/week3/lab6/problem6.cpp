#include <iostream>
using namespace std;

int maximum(int a, int b, int c){
    if ( a > b && a > c) {
        return a;
    }
    else if (b>a && b>c){
        return b;
    }
    else if (c>a && c>b) {
        return c;
    }

}
int minimum(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    }
    else if (b < a && b < c) {
        return b;
    }
    else if (c < a && c < b) {
        return c;
    }
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << "Maximum: " << maximum(a, b, c) << endl;
    cout << "Minimum: " << minimum(a, b, c) << endl;

    return 0;
}
