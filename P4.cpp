//Create a program that prompts the user to enter the day of the week (1 for Monday, 2 for Tuesday, etc.) and then displays whether it's a weekday or a weekend day.//

#include <iostream>
using namespace std;

int main() {
    int dayOfWeek;

    //enter the day of the week
    cout << "Enter the day of the week (1 for Monday, 2 for Tuesday, etc.): ";
    cin >> dayOfWeek;

    // Check if the entered day is a weekday//
    if (dayOfWeek >= 1 && dayOfWeek <= 5) {
        cout << "It's a weekday.\n"; 
    } else if (dayOfWeek == 6 or dayOfWeek == 7) {
        // Check if the entered day is a weekend//
        cout << "It's a weekend day.\n"; 
    } else {
        cout << "Invalid day of the week. Please enter a number between 1 and 7.\n";
    }

   
}
