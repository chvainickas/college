/// bank.cpp
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std ;
class bank_account
{
public:
   bank_account( int acc_no, double initial_balance ) ;
   bank_account() ;
   float display_balance() ;

private:

   int dm_account_number ;
   double dm_balance ;
   static int dm_line_counter ;
///When static keyword is used, variable or data members or functions can
///not be modified again. It is allocated for the lifetime of program.
///Static functions can be called directly by using class name.
};
///                           (80045001,          100)
bank_account::bank_account( int acc_no, double initial_balance )
{
  dm_account_number = acc_no ;
 dm_balance = initial_balance ;
}


float bank_account::display_balance()
{if (dm_line_counter == 0)   ///
    {   cout << " _______________________________"  << endl;
        cout << "|            EFT REPORT         |"  << endl;
        cout << "|" << setw(12) << " Account No " << setw(12) << "     Balance       |" <<endl;}
   cout << "|" << setw(12) << dm_account_number << setw(12) << fixed << setprecision( 2 )<< dm_balance <<  "       |" << endl ;
   dm_line_counter ++;
   if (dm_line_counter == 4)   ///
    {   cout << "|_______________________________|"  << endl;}


}

 int bank_account::dm_line_counter = 0 ;  /// give this variable a starting value


int account_no[4] = {80045001,80045002,80045003,80045004};
float op_bal[4] = {100,200,300,400};



main()
{
system("COLOR F3");
  bank_account account1( account_no[0], op_bal[0] ) ;
  bank_account account2( account_no[1],op_bal[1] ) ;
  bank_account account3( account_no[2], op_bal[2] ) ;
  bank_account account4( account_no[3],op_bal[3] ) ;

    account1.display_balance() ;
    account2.display_balance() ;
    account3.display_balance() ;
    account4.display_balance() ;


}














