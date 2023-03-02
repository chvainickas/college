#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class reporting
{
public:
    void payslip(int emp_number, float taxable_P, float paye, float prsi, float usc, float union_subs, float h_ins, float tax_credit, float net_pay);
    void print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch);

private:
    float dm_taxable_P, dm_PAYE, dm_prsi, dm_USC, dm_Union_subs, dm_health_ins, dm_Net_pay, dm_gross, dm_Tax_Credit, dm_net;
    int dm_emp, dm_switch;
};
 
void reporting::print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch)
{
    dm_switch = heading_switch;
    dm_emp = employee_number;
    dm_gross = gross_pay;
    dm_net = dm_net;

    if (dm_switch == 1)
    {
        cout << "_______________________" << endl;
        cout << "|"
             << "Gross to Net Report"
             << "       |" << endl;
        cout << "_______________________" << endl;
        cout << "|" << setw(10) << "Emp No" << setw(10) << "Gross" << setw(10) << "Net "
             << "    |" << endl;
        cout << "|" << setw(10) << dm_emp << setw(10) << dm_gross << setw(10) << dm_net << "    |" << endl;
        if (dm_switch == 4)
        {
            cout << "_________________________" << endl;
        }
    }
}

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
float taxable_payR[4] = {778.85,878.85,978.85,1670.90};
float weekly_tax_creitR[4] = {31.73,50.67,59.80,65.80};
float PAYEr[4] = {100.4,250.36,323.23,338.43};
float prsiR[4] = {30,30,30,30};
float USCr[4] = {22.05,61.70,69.70,73.94};
int union_subsR[4] = {10,25,25,0};
int health_insR[4] = {10,23,80,10};
float netpayR[4] = {500.61,900.73,900.99,1000.43};
int bank_account_numberR[4] = {80045001, 80045002, 80045003, 80045004};
int switch_var[4] = {1,2,3,4};

int main()
{
    /* code */
    system("COLOR F3");
    cout << "|-------------REPORTING CLASS-----------------|" << endl;
    class reporting report[4];
    for (int i = 0; i < 4; i++)
    {
        report[i].payslip(employee_numberR[i], taxable_payR[i], PAYEr[i], prsiR[i], USCr[i], union_subsR[i], health_insR[i], weekly_tax_creitR[i], netpayR[i]);
        /// endlp
    }
    for (int j = 0; j < 4; j++)
    {
        report[j].print_gross_to_net_report(employee_numberR[j], taxable_payR[j], netpayR[j], switch_var[j]);
    }
    return 0;
}
