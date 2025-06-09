#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    num--;
    num*=7;
    num-=14;
    num/=12;
    num+=3;
    int r;
    r = num%3;
    cout << num << endl;
    cout<<r<<endl;
}