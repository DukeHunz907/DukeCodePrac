//Create a program that asks the user to enter a string and a character. Then, use a `for` loop to count and display the number of occurrences of that character in the string.

#include <iostream>
using namespace std;
int main () {
    cout << "Enter a string and a character" << endl;
    string inputStr;
    char c;
   cin >> c;
   int ocCounter = 0;
   
    getline(cin, inputStr);
    for (int i = 0; i < inputStr.length(); i++) {
        if (inputStr[i] == c) {
            ocCounter++;
        }

    }
    cout << ocCounter << endl;
}