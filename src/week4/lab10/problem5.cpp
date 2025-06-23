#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int total = 0;
    for (char c : s)
        if (c == a) ++total;
    return total;
}

int main() {
    char ch;
    string str;
    cin >> ch;
    cin.ignore();
    getline(cin, str);
    cout << count(str, ch);///
    return 0;
}
