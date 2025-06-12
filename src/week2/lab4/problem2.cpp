#include <iostream>
using namespace std;


int main() {


    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i=10; i<=n; i+=10) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}