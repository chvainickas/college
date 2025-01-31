#include <iostream>
#include <iomanip>
#include "header3.h"
using namespace std ;
/// Function declaration for the report methods
/// This function is used to the Gross Pay to Net Pay report.
void reporting::print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch)
{
    dm_switch = heading_switch;
    dm_emp = employee_number;
    dm_gross = gross_pay;
    dm_net = net_pay;

    if (dm_switch == 1) {
        cout << "_______________________" << endl;
        cout << "|"
             << "Gross to Net Report"
             << "       |" << endl;
        cout << "_______________________" << endl;
        cout << "|" << setw(10) << "Emp No" << setw(10) << "Gross" << setw(10) << "Net "
             << "    |" << endl;
    }
        cout << "|" << setw(10) << dm_emp << setw(10) << dm_gross << setw(10) << dm_net << "    |" << endl;
        dm_switch++;
        if (dm_switch == 5)
        {
            cout << "_________________________" << endl;
        }
}
/// This function is used to print payslip with all of the figures.
void reporting::payslip(int emp_number, float taxable_P, float paye, float prsi, float usc, float union_subs, float h_ins, float tax_credit, float net_pay)
{
    dm_emp = emp_number;
    dm_taxable_P = taxable_P;
    dm_Tax_Credit = tax_credit;
    dm_PAYE = paye - tax_credit;
    dm_prsi = prsi;
    dm_USC = usc;
    dm_Union_subs = union_subs;
    dm_health_ins = h_ins;
    dm_Net_pay = net_pay;

    cout << "________________" << endl;
    cout << "|"
         << "          Payslip " << endl;
    cout << "_________________" << endl;
    cout << left << setw(14) << "|Emp No" << right << setw(10) << dm_emp << setw(10) << "|" << endl;
    cout << left << setw(14) << "|Gross pay" << fixed << setprecision(2) << setw(10) << dm_taxable_P << setw(10) << "|" << endl;
    cout << left << setw(14) << "|PAYE" << right << setw(10) << dm_PAYE << setw(10) << "|" << endl;
    cout << left << setw(14) << "|PRSI" << right << setw(10) << dm_prsi << setw(10) << "|" << endl;
    cout << left << setw(14) << "|USC" << right << setw(10) << dm_USC << setw(10) << "|" << endl;
    cout << left << setw(14) << "|UNION" << right << setw(10) << dm_Union_subs << setw(10) << "|" << endl;
    cout << left << setw(14) << "|Health Ins" << right << setw(10) << dm_health_ins << setw(10) << "|" << endl;
    cout << left << setw(14) << "|NET PAY" << right << setw(10) << dm_Net_pay << setw(10) << "|" << endl;
    cout << left << setw(14) << "____________________________" << endl;
}

int employee_numberR[4] = {101, 102, 103, 104};
float taxable_payR[4] = {778.85, 878.85, 978.85, 1670.90}; /// delete?
float weekly_tax_creitR[4] = {31.73, 50.67, 59.80, 65.80}; /// delete?
float PAYEr[4] = {100.4, 250.36, 323.23, 338.43}; /// delete?
float prsiR[4] = {30, 30, 30, 30}; /// delete?
float USCr[4] = {22.05, 61.70, 69.70, 73.94};
int union_subsR[4] = {10, 25, 25, 0};
int health_insR[4] = {10, 23, 80, 10};
float netpayR[4] = {500.61, 900.73, 900.99, 1000.43}; /// delete?
int bank_account_numberR[4] = {80045001, 80045002, 80045003, 80045004};
int switch_var[4] = {1, 2, 3, 4};
