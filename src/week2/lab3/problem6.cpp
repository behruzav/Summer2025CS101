#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    srand(time(0));
    int rank = rand() % 13;
    int suit = rand() % 4;

    cout << "You picked the " << ranks[rank] << " of " << suits[suit] << "." << endl;

    return 0;
}
