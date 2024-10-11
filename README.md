# Bank Management System 
This C++ project implements a Bank Management System using Object-Oriented Programming (OOP) principles. It supports two types of accounts: Current Account and Fixed Deposit Account. The system allows the creation, deletion, and viewing of accounts and facilitates basic banking operations such as deposit, withdrawal, and interest calculation for fixed deposits.

Features:
Account Management:
Create new accounts (current and fixed).
Delete existing accounts.
Display account details.

Transactions:
Deposit funds into accounts.
Withdraw funds from accounts (with balance validation).

Interest Calculation:
Calculate 10% monthly interest on fixed deposit accounts.

Classes
Bank (Abstract Class):
The base class that declares the core methods for account operations (CreateAcc(), Del_Account(), Show_Account()).

Account (Inherits Bank):
Manages current accounts. Implements methods to create, delete, and display accounts.

FixedDP (Inherits Bank):
Manages fixed deposit accounts. Implements similar functionality to the Account class but includes an additional method for interest calculation.

Transaction (Inherits Account and FixedDP):
Handles account transactions like deposits and withdrawals.

How to Use
Users can create either a current or a fixed deposit account.
They can perform transactions such as deposits and withdrawals.
Fixed deposit account holders can calculate interest on their deposited amounts.
Accounts can be deleted, and account details can be viewed at any time.
Menu Options
For Current Account:

Open a current account.
Deposit funds.
Withdraw funds.
Close an account.
Show account details.
Exit.

For Fixed Deposit Account:

Open a fixed deposit account.
Deposit funds.
Calculate interest on the deposited amount.
Close an account.
Show account details.
Exit.

Getting Started
Clone the repository or download the source code.
Compile the C++ code using a C++ compiler such as g++.
Run the program to interact with the bank management system.

Future Improvements
Add support for multiple users.
Implement error handling for invalid account numbers.
Improve the graphical interface (currently CLI-based).