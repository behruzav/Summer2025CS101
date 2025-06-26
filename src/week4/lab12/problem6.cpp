#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int x;
    while (cin >> x && x != 0)
        vec.push_back(x);

    if (!vec.empty()) {
        cout << "Front: " << vec.front() << ", Back: " << vec.back() << endl;

        for (auto it = vec.begin(); it != vec.end(); ) {
            if (*it < 10)
                it = vec.erase(it);
            else
                ++it;
        }

        if (vec.size() >= 2) {
            vec.insert(vec.begin() + 1, 33);
            vec.insert(vec.end() - 1, 55);
        }

        for (int val : vec)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
