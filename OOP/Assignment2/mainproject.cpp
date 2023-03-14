/// mainproject.cpp
#include <iostream>
#include <iomanip>
#include "header1.h"
#include "memfun1.cpp"
#include "header2.h"
#include "memfun2.cpp"
#include "header3.h"
#include "memfun3.cpp"
#include "header4.h"
#include "memfun4.cpp"
#include <cstdlib>

using namespace std ;

main()
{
  /// 1 VALIDATION
//  system("COLOR 74");
//  class validation user1;
//  user1.Valid_user();

  /// 2 PAYROLL
  class payroll employee[4];
  for (int i = 0; i < 4; i++)

  {
    PAYE[i] = employee[i].get_paye(taxable_pay[i], SCROP[i], Wtax_credit[i]);
    USC[i] = employee[i].get_usc(taxable_pay[i]);
    prsi[i] = employee[i].get_prsi(taxable_pay[i]);
    net_pay[i] = employee[i].get_net(taxable_pay[i]);
      if (i == 0) {
          cout << "_______________________" << endl;
          cout << "|"
               << "Gross to Net Report"
               << "       |" << endl;
          cout << "_______________________" << endl;
          cout << "|" << setw(10) << "Emp No " << "|" <<setw(15) << " Weekly Gross Pay " <<"|" << setw(13) << " Weekly SCROP "<<"|" << setw(16) << " Weekly Tax Credit "<<"|" << setw(10) << " UNION SUBS' "<<"|" << setw(10) << " VHI   "<<"|" << setw(11) << " Bank Number"<<" |" << endl;
      }
    cout << fixed << setprecision(2) << setw(8) << employee_number[i] << setw(17)<< taxable_pay[i] << setw(16) << PAYE[i] << setw(18) << USC[i] << setw(16) << prsi[i] << setw(13) << net_pay[i] << setw(13) << account_no[i] << endl;
  }
  

  /// 3 REPORT
//  system("COLOR F3");
//  cout << "|-------------REPORTING CLASS-----------------|" << endl;
//  class reporting report[4];
//  for (int i = 0; i < 4; i++)
//  {
//    report[i].payslip(employee_numberR[i], taxable_payR[i], PAYEr[i], prsiR[i], USCr[i], union_subsR[i], health_insR[i], weekly_tax_creitR[i], net_pay[i]);
//  }
//  for (int j = 0; j < 4; j++)
//  {
//    report[j].print_gross_to_net_report(employee_numberR[j], taxable_payR[j], net_pay[j], switch_var[j]);
//  }

  /// 4 BANK
//  system("COLOR F3");
//  bank_account account1(account_no[0], net_pay[0]);
//  bank_account account2(account_no[1], net_pay[1]);
//  bank_account account3(account_no[2], net_pay[2]);
//  bank_account account4(account_no[3], net_pay[3]);
//
//  account1.display_balance();
//  account2.display_balance();
//  account3.display_balance();
//  account4.display_balance();
//  return 0;


}

