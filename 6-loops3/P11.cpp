// Develop a C++ program that asks the user to enter a string and then uses a `for` loop to determine if it's a palindrome (reads the same forwards and backwards). 
//Run the program in a way that number of loop's iteration is approximately equal to half of length of the string. 

#include <iostream>
using namespace std;
int main() {
    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            ispal = false;
        }
    }

}