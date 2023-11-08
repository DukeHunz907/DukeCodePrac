//Create a program that takes two numbers and swaps their values 

#include <iostream>
using namespace std;
int main() {
    cout << "Enter first number:";
    int x ;
    cin >> x;
    cout << "Enter second number:";
    int y ;
    cin >> y;
    int z;
    z = y;
    y = x;
    x = z;
    cout << "X is:" << x << "And Y is:" << y << endl;
}