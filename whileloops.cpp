// Write a program that asks the user for a number and uses the while
// loop to print all the even numbers between 1 and that number.



#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 2;
    while (i <= num) {
        cout << i << "\n";
        i = i + 2;

    }

    
  


}