#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (char c='A'; c<='Z'; c++) {
        cout << c << " ";
        count++;
        if (count % 5==0) cout << endl;
    }

    return 0;
}