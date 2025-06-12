#include <iostream>
using namespace std;

int main () {

    int num;
    cin >> num;
    bool isPrime = true;

    if (num<= 1) isPrime = false;
    for (int i=2; i*i <=num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << endl;
    return 0;
}