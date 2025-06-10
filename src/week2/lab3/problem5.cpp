#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int randomNum = rand();
    int guess;

    cout << "Guess if the number is even (0) or odd (1): ";
    cin >> guess;

    int correct = randomNum % 2;

    cout << "Generated number: " << randomNum << endl;
    if (guess == correct)
        cout << "Correct!" << endl;
    else
        cout << "Incorrect." << endl;

    return 0;
}
