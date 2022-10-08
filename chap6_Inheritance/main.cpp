#include <iostream>
#include "Savings_Account.h"

using namespace std;
int main()
{
     // Use the account class
     cout << "\n ====Account=============================" << endl;

     Account a1{1000.0};
     cout << a1 << endl; // Account balance:1000

     a1.deposit(500.0); // Account balance: 1500
     cout << a1 << endl;

     a1.withdraw(1000);  // Account balance:500
     cout << a1 << endl;

     a1.withdraw(5000.0);  // Insufficient funds
     cout << a1 << endl; // Account balance: 500
     return 0;
}