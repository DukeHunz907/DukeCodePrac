//Write a program that asks the user for a number and uses a `while` loop to print all the even numbers between 1 and that number.
#include <iostream>
using namespace std;
int main() {
    int userNumber;
    cout << "Enter a number: ";
    cin >> userNumber;
    int currentNumber = 2; 

    cout << "Even numbers between 1 and " << userNumber << " are: ";

    while (currentNumber <= userNumber) {
        cout << currentNumber << " ";
        currentNumber += 2;
    }

    cout << "\n";


}
