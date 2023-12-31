//Develop a C++ program that uses a `while` loop to calculate and print the sum of the squares of the first 15 positive integers (1^2 + 2^2 + 3^2 + ... + 15^2).

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;
   
    if (n <= 0) {
        cout << "Please enter a positive integer." << "\n";
        return 1; 
    }

    int i = 1;  

    while (i <= n) {
        int j = 1;  

        while (j <= i) {
            cout << "* ";  
            j++;              
        }

        cout << "\n";  
        i++;                     
    }

    return 0;
}





