#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;

    }
    cout << "sum="<< sum <<  endl;
    return 0;
}
