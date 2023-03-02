// Declaration of bank_account class.

#if !defined HEADER4
#define HEADER4
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
class bank_account
{
public:
    bank_account(int acc_no, double initial_balance);
    bank_account();
    float display_balance();

private:
    int dm_account_number;
    double dm_balance;
    static int dm_line_counter;
    /// When static keyword is used, variable or data members or functions can
    /// not be modified again. It is allocated for the lifetime of program.
    /// Static functions can be called directly by using class name.
};
///                           (80045001,          100)

#endif

