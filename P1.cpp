//Write a program that takes a user's age as input and prints out whether they are a child (0-12), a teenager (13-19), an adult (20-64), or a senior (65 and older).//


#include <iostream>
using namespace std;

int main () {
    int age;

        cout << "enter your age: ";
        cin >> age;

  if (age >= 0 && age <= 12) {
        cout << "You are a child.\n";
    } else if (age >= 13 && age <= 19) {
        cout << "You are a teenager.\n";
    } else if (age >= 20 && age <= 64) {
        cout << "You are an adult.\n";
    } else if (age >= 65) {
       cout << "You are a senior.\n"; 
    } else {
        cout << "Invalid age entered.\n"; 
    }

    
}
