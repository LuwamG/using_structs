#include <iostream>
#include <string>
#include "using_sturcts.hpp"

using namespace std; 



static void inputCustomer(Customer& customer) { //changed functions to static to use getline without using cin.ignore
    cout << "\nEnter Customer ID: ";
    cin >> customer.customer_id;

   
    cout << "Enter Customer Name: ";
    getline(cin, customer.name);

    cout << "Enter Customer Email: ";
    getline(cin, customer.email);
}

static void printCustomers(const Customer customers[], int customerCount) {
    cout << "\nCustomer Details:\n";
    for (int i = 0; i < customerCount; i++) {
        cout << "ID: " << customers[i].customer_id
            << ", Name: " << customers[i].name
            << ", Email: " << customers[i].email << "\n";
    }
}


