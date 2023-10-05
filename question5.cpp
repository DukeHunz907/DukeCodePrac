//Develop a C++ program that receives a number and uses a `while` loop to find out if it is a prime number.  // this problem is updated!

#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;


    cout << "Enter a positive integer: ";
    cin >> number;

   
    if (number <= 1) {
        cout << "Please enter a positive integer greater than 1.\n";
        return 1; 
    }

    int divisor = 2;  

  
    while (divisor * divisor <= number) {
        if (number % divisor == 0) {
            isPrime = false;
            break;  
        }
        divisor++;
    }

 
    if (isPrime) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }

    return 0;
}
