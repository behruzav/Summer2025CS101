#include <iostream>
#include <ctime>
using namespace std;

 int main() {
     srand(time(0));
     int even = 0, odd = 0;
     for (int i = 0; i < 1000; i++) {
         int r = rand();
         if (r % 2 == 0)
             even++;
         else
             odd++;
     }
     cout << even << endl;
     cout << odd << endl;
return 0;
 }