// Declaration of bank_account class.

#if !defined HEADER3
#define HEADER3

class reporting
{
public:
    void payslip(int emp_number, float taxable_P, float paye, float prsi, float usc, float union_subs, float h_ins, float tax_credit, float net_pay);
    void print_gross_to_net_report(int employee_number, float gross_pay, float net_pay, int heading_switch);

private:
    float dm_taxable_P, dm_PAYE, dm_prsi, dm_USC, dm_Union_subs, dm_health_ins, dm_Net_pay, dm_gross, dm_Tax_Credit, dm_net;
    int dm_emp, dm_switch;
};

#endif

