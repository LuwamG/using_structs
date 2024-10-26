#include <iostream>
#include <string>
#include "using_structs.hpp"
#include "using_structs.cpp"
int main() {
    const int MAX_CUSTOMERS = 100; // Maximum number of customers
    Customer customers[MAX_CUSTOMERS];
    int customerCount = 0;
    char answer;

    // Loop to enter customer details
    while (customerCount < MAX_CUSTOMERS) {
        inputCustomer(customers[customerCount]);
        customerCount++;

        // Ask if the user wants to enter another customer
        if (customerCount < MAX_CUSTOMERS) {
            cout << "Do you want to enter another customer? (y/n): ";
            cin >> answer;


            if (answer != 'y' && answer != 'Y') {
                break; 
            }
        }
        else {
            cout << "Maximum number of customers reached.\n";
        }
    }

    
    printCustomers(customers, customerCount);

    return 0;
}