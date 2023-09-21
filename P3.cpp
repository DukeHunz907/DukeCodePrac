//Develop a program that takes a user's birthdate and the current date as input and calculates their age in years, months, and days 
//(assume there is no leap years and all months has 30 days)

#include <iostream>
using namespace std;

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;

    // Input for birthdate
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month: ";
    cin >> birthMonth;
    cout << "Enter your birth day: ";
    cin >> birthDay;

    // Input for current date
    cout << "Enter the current year: ";
    cin >> currentYear;
    cout << "Enter the current month: ";
    cin >> currentMonth;
    cout << "Enter the current day: ";
    cin >> currentDay;

    // Calculate age in years
    int ageYears = currentYear - birthYear;

    // Calculate age in months
    int ageMonths = currentMonth - birthMonth;

    // if current Day is less than birthDay
    if (currentDay < birthDay) {
        ageMonths--;
    }

    // Ensure age Months is positive
    if (ageMonths < 0) {
        ageMonths += 12;
    }

    // Calculate age in days
    int ageDays = currentDay - birthDay;

    // Adjust age Days if it's negative
    if (ageDays < 0) {
        ageDays += 30; // Assuming all months have 30 days
    }

    cout << "Your age is: " << ageYears << " years, " << ageMonths << " months, and " << ageDays << " days." << "\n";

    
}
