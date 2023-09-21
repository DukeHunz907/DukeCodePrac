//Develop a program that simulates a simple ATM. Ask the user to select an option (withdraw, deposit, check balance) and use a switch statement to perform 
//(by printing a message on the screen) the corresponding operation.
 
 #include <iostream>
 using namespace std;

int main() {
    double balance = 1000.0; // Initial account balance
    int choice;
    double amount;

    // Display the ATM menu
    cout << "Welcome to the BEST ATM!\n"; 
    cout << "1. Withdraw\n"; 
    cout << "2. Deposit\n"; 
    cout << "3. Check Balance\n"; 
    cout << "4. Exit\n"; 

    // select an option
    cout << "Please enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            // Withdraw
            cout << "Enter the amount to withdraw: $";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. Your new balance is: $" << balance << "\n";
            } else {
                cout << "Invalid amount or insufficient balance.\n"; 
            }
            break;

        case 2:
            // Deposit
            cout << "Enter the amount to deposit: $";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful. Your new balance is: $" << balance << "\n";
            } else {
            cout << "Invalid amount.\n"; 
            }
            break;

        case 3:
            // Check Balance
            cout << "Your current balance is: $" << balance << "\n";
            break;

        case 4:
            // Exit
            cout << "Thank you for using the ATM. Have a great day!\n"; 
            break;

        default:
           cout << "Invalid choice. Please select a valid option (1-4).\n";
            break;
    }

    
}
