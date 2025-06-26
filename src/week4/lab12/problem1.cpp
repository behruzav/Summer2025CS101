#include <iostream>
using namespace std;

int main() {
    int nums[5], flag = 0;
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
            if (nums[i] >= 0) flag = 1;
    }
    cout << flag << endl;
    return 0;

}