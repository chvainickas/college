
#include <iostream>
#include <iomanip>
using namespace std;
class payroll
{
    public:
    float get_prsi(float taxable_pay);
    float get_usc(float taxable_pay);
    float get_paye(float taxable_pay, float E_SRCOP, float tax_credits);
    float get_net(float taxable_pay);
    private:
    float dm_taxable_pay;
    float dm_usc;
    float dm_paye;
    float dm_prsi;
    float dm_SCROP;
    float dm_tax_credit;
    float dm_net;
};

float payroll::get_net(float taxable_pay)
{
    dm_taxable_pay = taxable_pay;
    dm_net = (dm_taxable_pay - (dm_paye+dm_prsi+dm_usc));
    return dm_net;
}

float payroll::get_prsi(float taxable_pay)
{
    dm_taxable_pay = taxable_pay;
    dm_prsi = dm_taxable_pay *0.04;
    return dm_prsi;
}
float payroll::get_paye(float taxable_pay)
{
    dm_SCROP = E_SCROP;
    dm_tax_credit = tax_credit;
    dm_taxable_pay = taxable_pay;
    if (dm_taxable_pay > dm_SCROP)
    { dm_paye = ((dm_taxable_pay- dm_SCROP)*0.4)+135.77;}
    else
    {
        dm_paye =dm_taxable_pay *.2;
    }
dm_paye = dm_paye - dm_tax_credit;
    return dm_paye;
}

float payroll::get_usc(float taxable_pay)
{
    dm_taxable_pay = taxable_pay;
    if (dm_taxable_pay <= 231)
    {
        dm_usc = 
    }
    
}