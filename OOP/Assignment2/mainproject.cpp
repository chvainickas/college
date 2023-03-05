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
  system("COLOR 74");
  class validation user1;
  user1.Valid_user();
  /// 2 PAYROLL
  class payroll employee[4];

  for (int i = 0; i < 4; i++)
  {
    PAYE[i] = employee[i].get_paye(taxable_pay[i], SCROP[i], Wtax_credit[i]);
    USC[i] = employee[i].get_usc(taxable_pay[i]);
    prsi[i] = employee[i].get_prsi(taxable_pay[i]);
    net_pay[i] = employee[i].get_net(taxable_pay[i]);

    cout << fixed << setprecision(2) << setw(10) << i + 1 << setw(10)<< taxable_pay[i] << setw(10) << PAYE[i] << setw(10) << USC[i] << setw(10) << prsi[i] << setw(10) << net_pay[i] << endl;
  }
  

  /// 3 REPORT
  system("COLOR F3");
  cout << "|-------------REPORTING CLASS-----------------|" << endl;
  class reporting report[4];
  for (int i = 0; i < 4; i++)
  {
    report[i].payslip(employee_numberR[i], taxable_payR[i], PAYEr[i], prsiR[i], USCr[i], union_subsR[i], health_insR[i], weekly_tax_creitR[i], netpayR[i]);
  }
  for (int j = 0; j < 4; j++)
  {
    report[j].print_gross_to_net_report(employee_numberR[j], taxable_payR[j], netpayR[j], switch_var[j]);
  }

  /// 4 BANK
  system("COLOR F3");
  bank_account account1(account_no[0], op_bal[0]);
  bank_account account2(account_no[1], op_bal[1]);
  bank_account account3(account_no[2], op_bal[2]);
  bank_account account4(account_no[3], op_bal[3]);

  account1.display_balance();
  account2.display_balance();
  account3.display_balance();
  account4.display_balance();
  return 0;


}

