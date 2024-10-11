#include <iostream>
#include <string>
using namespace std;

int total = 0;
struct person {
    long cash, ID;
    string first_name, middle_name, last_name, phone;
}   person[100];

class Bank {
public:

    virtual void CreateAcc() = 0;
    virtual void Del_Account() = 0;
    virtual void Show_Account() = 0;

};

class Account : public Bank
{

public:
    int select;
    void CreateAcc() {
        cout << "Your Account number is: " << total << endl;

        cout << "Enter first name: ";
        cin >> person[total].first_name;

        cout << "Enter middle name (Enter NIL if you don't have a middle name): ";
        cin >> person[total].middle_name;

        cout << "Enter last name: ";
        cin >> person[total].last_name;

        cout << "ID: ";
        cin >> person[total].ID;

        cout << "Contact: ";
        cin >> person[total].phone;

        cout << "Total Cash: ";
        cin >> person[total].cash;

        total++;

    }

    void Del_Account() {
        cout << "Enter the Account number you want to delete: ";
        cin >> select;
        person[select].ID = 0;
        person[select].cash = 0;
        person[select].first_name = "N/A";
        person[select].middle_name = "N/A";
        person[select].last_name = "N/A";
        person[select].phone = "N/A";
        cout << "Your account has been deleted." << endl;
        cout << "Your Account details are: " << endl;
        cout << "First Name: " << person[select].first_name << endl;
        cout << "Middle Name: " << person[select].middle_name << endl;
        cout << "Last Name: " << person[select].last_name << endl;
        cout << "ID: " << person[select].ID << endl;
        cout << "Phone number: " << person[select].phone << endl;
        cout << "Cash: " << person[select].cash << endl;

    }

    void Show_Account() {
        cout << "enter the Account number you want to see: ";
        cin >> select;
        cout << "Your Account details are: " << endl;
        cout << "First Name: " << person[select].first_name << endl;
        cout << "Middle Name: " << person[select].middle_name << endl;
        cout << "Last Name: " << person[select].last_name << endl;
        cout << "ID: " << person[select].ID << endl;
        cout << "Phone number: " << person[select].phone << endl;
        cout << "Cash: " << person[select].cash << endl;

    }

};
class FixedDP : public Bank {
public:
    int select;
    float interest_amount;
    void CreateAcc()
    {
        cout << "Your Account number is: " << total << endl;
        cout << "Enter first name: ";
        cin >> person[total].first_name;

        cout << "Enter middle name (Enter NIL if you don't have a middle name): ";
        cin >> person[total].middle_name;

        cout << "Enter last name: ";
        cin >> person[total].last_name;

        cout << "ID: ";
        cin >> person[total].ID;

        cout << "Contact: ";
        cin >> person[total].phone;

        cout << "Total Cash: ";
        cin >> person[total].cash;

        total++;
    }

    void Del_Account()
    {
        cout << "Enter the Account number you want to delete: ";
        cin >> select;
        person[select].ID = 0;
        person[select].cash = 0;
        person[select].first_name = "N/A";
        person[select].middle_name = "N/A";
        person[select].last_name = "N/A";
        person[select].phone = "N/A";
        cout << "Your account has been deleted." << endl;
        cout << "Your Account details are: " << endl;
        cout << "First Name: " << person[select].first_name << endl;
        cout << "Middle Name: " << person[select].middle_name << endl;
        cout << "Last Name: " << person[select].last_name << endl;
        cout << "ID: " << person[select].ID << endl;
        cout << "Phone number: " << person[select].phone << endl;
        cout << "Cash: " << person[select].cash << endl;
    }

    void Show_Account()
    {
        cout << "enter the Account number you want to see: ";
        cin >> select;
        cout << "Your Account details are: " << endl;
        cout << "First Name: " << person[select].first_name << endl;
        cout << "Middle Name: " << person[select].middle_name << endl;
        cout << "Last Name: " << person[select].last_name << endl;
        cout << "ID: " << person[select].ID << endl;
        cout << "Phone number: " << person[select].phone << endl;
        cout << "Cash: " << person[select].cash << endl;
    }

    void Interest() {
        cout << "Enter the account number you want to find interest of = " << endl;
        cin >> select;
        interest_amount = 0.1 * person[select].cash;
        cout << "Your 1 month interest will be = " << interest_amount << " (This amount is 10 percent of your deposited amount)" << endl;
    }

};
class Transaction : public Account, public FixedDP {
public:
    float deposit, withdraw;
    int sel;

    void Deposit() {

        cout << "Enter the Account number you want to make Transaction with: " << endl;
        cin >> sel;
        cout << "Your Current cash is: " << person[sel].cash << endl;
        cout << "Enter the amount you want to deposit: " << endl;
        cin >> deposit;
        person[sel].cash = person[sel].cash + deposit;
        cout << "Your Updated cash is: " << person[sel].cash << endl;
    }

    void Withdrawl() {

        cout << "Enter the Account number you want to make Transaction with: " << endl;
        cin >> sel;
        cout << "Your Current cash is: " << person[sel].cash << endl;
        cout << "Enter the amount you want to withdraw: " << endl;
        cin >> withdraw;
        if (withdraw > person[sel].cash) {
            cout << "You dont have enough balance for transaction.";
        }
        else {
            person[sel].cash = person[sel].cash - withdraw;
            cout << "Your Updated cash is: " << person[sel].cash << endl;
        }
    }
};


int main()
{
    Bank* ptr, * ptr2;
    Account acc;
    FixedDP fix;
    Transaction obj, obj2;

    int choice;
    string option, again;

    ptr = &acc;
    ptr2 = &fix;

    LOOP:do {
        cout << "Enter Account type(fixed/current): ";
        cin >> option;

        //IF YOU CHOOSE CURRENT ACCOUNT:

        if (option == "current") {
            do {
                cout << endl
                    << "MAIN MENU" << endl;
                cout << "1: Open a current account." << endl;
                cout << "2: Deposit." << endl;
                cout << "3: Withdrawl." << endl;
                cout << "4: Close an Account." << endl;
                cout << "5: Show Account." << endl;
                cout << "6: Exit" << endl;
                cout << "Select an option:";
                cin >> choice;

                switch (choice)
                {

                case 1:
                    ptr->CreateAcc();
                    break;

                case 2:
                    obj.Deposit();
                    break;

                case 3:
                    obj.Withdrawl();
                    break;

                case 4:
                    ptr->Del_Account();
                    
                    break;

                case 5:
                    ptr->Show_Account();
                    break;

                case 6:
                    cout << endl << "Thank you!!!!" << endl;
                    break;

                default:
                    cout << "Enter Valid option.";
                    break;
                }

            } while (choice != 6);
        }

        //IF YOU CHOOSE FIXED ACCOUNT:

        else if (option == "fixed")
        {
            do
            {
                cout << endl
                    << "MAIN MENU" << endl;
                cout << "1: Open an fixed account." << endl;
                cout << "2: Deposit." << endl;
                cout << "3: Find interest on your deposited amount." << endl;
                cout << "4: Close an Account." << endl;
                cout << "5: Show Account." << endl;
                cout << "6: Exit" << endl;
                cout << "Select an option:";
                cin >> choice;
                switch (choice)
                {

                case 1:
                    ptr2->CreateAcc();
                    break;

                case 2:
                    obj2.Deposit();
                    break;

                case 3:
                    obj2.Interest();
                    break;

                case 4:
                    ptr2->Del_Account();
                    
                    break;

                case 5:
                    ptr2->Show_Account();
                    break;

                case 6:
                    cout << endl << "Thank you!!!!!" << endl;
                    break;

                default:
                    cout << "Enter Valid option.";
                    break;
                }
            } while (choice != 6);
        }
        else{
            goto LOOP;
        }
        cout << "Do you want to switch the account? " << endl << "Enter yes or no: ";
        cin >> again;
    }while (again != "no");
    return 0;
}