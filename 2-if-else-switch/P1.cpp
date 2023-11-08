// Write a program that checks if a number is even or odd.
#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int x;
    cin >> x;
    if (x % 2 == 0) {
        cout << x << "The number is even!" << endl;
    } else {
        cout << "The number is odd!" << endl;
    }

}