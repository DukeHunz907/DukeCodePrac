//Create a program that prints out the electricity charge for a household based on the number of units consumed (units are received from the input).
//The rate is $0.12 per unit for the first 100 units and $0.15 per unit for additional units.//

#include <iostream>
using namespace std;

int main () {

    double rateFirst100Units = 0.12; // Rate for the first 100 units
    double rateAdditionalUnits = 0.15; // Rate for additional units
    double unitsConsumed;

    // Prompt the user for the number of units consumed
    std::cout << "Enter the number of units consumed: ";
    std::cin >> unitsConsumed;

    if (unitsConsumed >= 0) {
        double totalCharge;

        // Calculate the electricity charge
        if (unitsConsumed <= 100) {
            totalCharge = unitsConsumed * rateFirst100Units;
        } else {
            // For the first 100 units
            totalCharge = 100 * rateFirst100Units;
            
            // For additional units
            totalCharge += (unitsConsumed - 100) * rateAdditionalUnits;
        }

        // Display the electricity charge
            cout << "Electricity charge: $" << totalCharge << std::endl;
    } else {
            cout << "Invalid input.\n"; 
    }

    
}

