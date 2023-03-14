#include <iostream>
#include <iomanip>
#include "header4.h"
using namespace std ;
/// Function declaration for the bank methods
/// This function is used to print the Gross Pay figure.
bank_account::bank_account(int acc_no, double initial_balance)
{
    dm_account_number = acc_no;
    dm_balance = initial_balance;
}

float bank_account::display_balance()
{
    if (dm_line_counter == 0) ///
    {
        cout << " _______________________________" << endl;
        cout << "|            EFT REPORT         |" << endl;
        cout << "|" << setw(12) << " Account No " << setw(12) << "     Balance       |" << endl;
    }
    cout << "|" << setw(12) << dm_account_number << setw(12) << fixed << setprecision(2) << dm_balance << "       |" << endl;
    dm_line_counter++;
    if (dm_line_counter == 4) ///
    {
        cout << "|_______________________________|" << endl;
    }
}

int bank_account::dm_line_counter = 0; /// give this variable a starting value

int account_no[4] = {80045001, 80045002, 80045003, 80045004};
float op_bal[4] = {100, 200, 300, 400}; /// delete?
