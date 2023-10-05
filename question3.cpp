//Create a program that asks the user for a positive integer `n` and uses a `while` loop to calculate and print the product of all numbers from 1 to `n`.
#include <iostream>
using namespace std;

int main() {
    int n;
    int product = 1; 

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << "\n";
        return 1;
    }

    int i = 1;  

    while (i <= n) {
        product *= i;  
        i++;        
    }

    
  cout << "The product of all numbers from 1 to " << n << " is: " << product << "\n";

   
}
