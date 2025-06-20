#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int ROLLS = 10000;
    int counts[7] = {0};

    for (int i = 0; i < ROLLS; i++) {
        int roll = rand() % 6 + 1;
        counts[roll]++;
    }

    for (int i = 1; i <= 6; i++)
        cout << "Side " << i << ": " << counts[i] << " times" << endl;

    return 0;
}