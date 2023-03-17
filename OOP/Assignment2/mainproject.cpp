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
  /// FIRST TABLE (DONE)
//  for (int i = 0; i < 4; i++)
//
//  {
//    PAYE[i] = employee[i].get_paye(taxable_pay[i], SCROP[i], Wtax_credit[i]);
//    USC[i] = employee[i].get_usc(taxable_pay[i]);
//    prsi[i] = employee[i].get_prsi(taxable_pay[i]);
//    net_pay[i] = employee[i].get_net(taxable_pay[i]);
//      if (i == 0) {
//          cout << "_________________________________________________________________________________________________________" << endl;
//          cout << "|" << setw(10) << "Emp No " << "|" <<setw(15) << " Weekly Gross Pay " <<"|" << setw(13) << " Weekly SCROP "<<"|" << setw(16) << " Weekly Tax Credit "<<"|" << setw(10) << " UNION SUBS' "<<"|" << setw(10) << " VHI   "<<"|" << setw(11) << " Bank Number"<<" |" << endl;
//          cout << "_________________________________________________________________________________________________________" << endl;
//      }
//    cout<< "|" << fixed << setprecision(2) << setw(6) << employee_number[i] << "    |"<< setw(12)<< taxable_pay[i] << setw(7)<<" |" << setw(10) << SCROP[i] << setw(5)<<"|"<< setw(12) << Wtax_credit[i] <<setw(8) <<"|"<< setw(7) << union_subs[i]<< setw(7) <<" |"<< setw(6) << VHI[i] << setw(5)<<"  |"<< setw(10) << account_no[i] << "   |"<< endl;
//  }
//    cout << "_________________________________________________________________________________________________________" << endl;

/// SECOND TABLE (TO-DO)
/// NOTE: Second Table Keeps printing wrong figures.memfun2 formulas have different output
///
    for (int i = 0; i < 4; i++)
    {
        PAYE[i] = employee[i].get_paye(taxable_pay[i], SCROP[i], Wtax_credit[i]);
        USC[i] = employee[i].get_usc(taxable_pay[i]);
        prsi[i] = employee[i].get_prsi(taxable_pay[i]);
        net_pay[i] = employee[i].get_net(taxable_pay[i]);
        if (i == 0) {
            cout << "____________________________________________________________________________________________________________________" << endl;
            cout << "| " << setw(10) << "Weekly taxable gross " << "|" <<setw(15) << " Bal>SRCOP taxed @40% PAYE " <<"|" << setw(13) << " PAYE-Tax Credit "<<"|" << setw(7) << " PRSI EE "<<"|" << setw(5) << "  USC* "<<"|" << setw(10) << " Total deductions*"<<"|" << setw(5) << " Net Pay*"<<" |" << endl;
            cout << "____________________________________________________________________________________________________________________" << endl;
        }
    cout<< "|" << fixed << setprecision(2) << setw(15) << taxable_pay[i] << setw(8)<< "|"<< setw(17)<< taxable_pay[i] - SCROP[i] << setw(11)<<"|" << setw(12) << PAYE[i] << setw(6)<<"|"<< setw(7) << prsi[i] <<setw(4) <<"| " << USC[i]<<" |"<< setw(13) << PAYE[i]+prsi[i]+USC[i]+union_subs[i]+VHI[i] << setw(6)<<"|"<< setw(8) << taxable_pay[i]-((PAYE[i])+prsi[i]+USCr[i]+ union_subs[i] + VHI[i])<< setw(2) << "|"<< endl;    }
    cout << "____________________________________________________________________________________________________________________" << endl;

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

