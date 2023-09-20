//Write a program that takes a user's age as input and prints out whether they are a child (0-12), a teenager (13-19), an adult (20-64), or a senior (65 and older).//


#include <iostream>
using namespace std;

int main () {
    int age;

        cout << "enter your age: ";
        cin >> age;

  if (age >= 0 && age <= 12) {
        std::cout << "You are a child." << std::endl;
    } else if (age >= 13 && age <= 19) {
        std::cout << "You are a teenager." << std::endl;
    } else if (age >= 20 && age <= 64) {
        std::cout << "You are an adult." << std::endl;
    } else if (age >= 65) {
        std::cout << "You are a senior." << std::endl;
    } else {
        std::cout << "Invalid age entered." << std::endl;
    }

    return 0;



    
}
