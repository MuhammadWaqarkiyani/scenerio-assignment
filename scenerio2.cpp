#include <iostream>
using namespace std;
int main() {
    double balance = 1000;
    int choice;
    double amount;
    do {
        cout << "\n--- Simple ATM Menu ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Please enter your choice (1-4): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << "\n";
                break;
            case 2:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance! Your current balance is: $" << balance << "\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully. Your new balance is: $" << balance << "\n";
                }
                break;
            case 3:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully. Your new balance is: $" << balance << "\n";
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    } while (choice != 4);
    return 0;
}