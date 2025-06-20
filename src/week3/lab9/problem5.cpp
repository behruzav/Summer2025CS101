#include <iostream>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++)
        if (list1[i] != list2[i])
            return false;
    return true;
}

int main() {
    int n1, n2;
    cout << "n1=";
    cin >> n1;
    int list1[n1];
    for (int i = 0; i < n1; i++)
        cin >> list1[i];

    cout << "n2=";
    cin >> n2;
    int list2[n2];
    for (int i = 0; i < n2; i++)
        cin >> list2[i];

    if (n1 != n2 || !strictlyEqual(list1, list2, n1))
        cout << "Two lists are not strictly identical" << endl;
    else
        cout << "Two lists are strictly identical" << endl;

    return 0;
}