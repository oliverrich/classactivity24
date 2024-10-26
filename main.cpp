#include <iostream>



#include "utils/customer.h"
    using namespace std;

int main() {
    Customer customer;

    cout << "Enter customer ID: ";
    cin >> customer.id;
    cin.ignore();

    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);

    // outputting details
    cout << "\nCustomer Details:\n";
    cout << "ID: " << customer.id << endl;
    cout << "Name: " << customer.name << endl;
    cout << "Email: " << customer.email << endl;

    return 0;
}


