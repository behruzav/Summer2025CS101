#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x > 0)
            nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    for (int num : nums)
        cout << num << " ";
    return 0;
}