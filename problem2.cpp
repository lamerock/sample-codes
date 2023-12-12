/* Design a retirement planning calculator for Skulling 
 * Financial Services. Allows a user to enter a number 
 * of working years remaining in the user's career and
 * the annual amount of money the user can save. Assume
 * that the user earns three percent simple interest on
 * savings annually. Program output is a schedule that
 * lists each year number in retirement starting with
 * year 0 and the user's savings at the start of that
 * year. Assume that the user spend $50,000 per year
 * retirement and then earns three percent interest on
 * the remaining balance. End the list after 40 years,
 * or when the user's balance is 0 or less, whichever
 * comes first.
*/

#include <iostream>
using namespace std;

int main() {
    float savings = 0, interestRate = 0.03;
    int number_of_years = 0, savingsTotal = 0;

    cout << "Enter the number of working years remaining: ";
    cin >> number_of_years;

    cout << "Enter the annual amount of money saved: $";
    cin >> savings;

    for (int year = 1; year <= number_of_years; year++) {
        float interest = savingsTotal * interestRate;
        savingsTotal += savings + interest;

        cout << "Year: " << year << " Savings: " << savingsTotal << " Interest: " << interest << endl;
    }
    
    cout << "RETIREMENT" << endl;
    float balance = savingsTotal;
    for (int year = 0; year < 40; year++){
        float interest = balance * interestRate;
        balance -= 50000 + interest;
        cout << "Year: " << year << " Balance: " << balance << " Interest: " << interest << endl;
        if (balance <= 0) {
            cout << "You run out of money after " << year << " years." << endl;
            break;
        }
    }

    return 0;
}
