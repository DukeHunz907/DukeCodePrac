//Write a program that asks the user for a positive integer and uses a `while` loop to calculate and print the sum of its digits.

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer.\n";
        return 1;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of the digits is: " << sum << "\n";

    return 0;
}
