/*
Author: Joanna Sanchez
Purpose: Evaluate the total tax of a given purchase.
*/
#include <iostream>
using namespace std;

int main() {
  
    
    // Initialize  a double variable to hold the Purchase price with the value 95
    double purchasePrice = 95.0;
    
    
    // Declare double variables to hold taxes and payment
    double stateSalesTax;
    double countySalesTax;
    double totalTax;
    double totalPayment;
    
    // Code assignment statements that calculate values to populate the following variables
    stateSalesTax = purchasePrice * 7.5 * 0.01; // %
    countySalesTax = purchasePrice * 2.0 * 0.01; // %
    totalTax = stateSalesTax + countySalesTax;
    totalPayment = totalTax + purchasePrice;
    
    // Display all variables. Do not worry about formatting variables.
    cout << "Purchase Price\t\t: $" << purchasePrice << endl;
    cout << "State Sales Tax\t\t: $" << stateSalesTax << "\t(7.5 % of purchase price)" << endl;
    cout << "County Sales Tax\t: $" << countySalesTax << "\t\t(2% of the purchase price)" << endl;
    cout << "Total Tax\t\t: $" << totalTax << endl;

    return 0;
}
