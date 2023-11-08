// Write a program to get the price of an item and print its price + 9% tax. 
#include <iostream>
using namespace std;
int main() {
    cout << "Enter a price:" << endl;
    double x;
    cin >> x;
    x = x + 0.09 * x;
    cout << "price + tax: " << x << endl;
}