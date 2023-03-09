/// payrollMain.cpp
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
        dm_usc = dm_taxable_pay * .0005;
    }
    else if(dm_taxable_pay>231 && dm_taxable_pay <= 382)
    {
        dm_usc = ((dm_taxable_pay - 231)*.02)+(1.15);
    }
    else if (dm_taxable_pay > 382 && dm_taxable_pay <= 1347)
    {
        dm_usc = ((dm_taxable_pay - 382) * .045) + (1.15+3.02);
    }
    else
    {
        dm_usc = ((dm_taxable_pay - 1337) * .08) + (1.15+3.02+43.425);
    }
    return dm_usc;
}
float taxable_pay[4] = {778,1447,1547,1600};
int employee_number[4] = {101,102,103,104};
float SCROP[4] = {678.85, 678.85, 678.85, 678.85};
float Wtax_credit[4] = {31.73,50,67,59.80,65.80};
int union_subs[4] = {0,25,25,0}
int health_ins[4] = {0, 23, 80,10}
float PAYE[4];
float prsi[4];
float USC[4];
float net_pay[4];

int main()
{
    class payroll employee[4];

    for(int i=0;i<4;i++)
    {
        PAYE[i] = employee[i].get_paye(taxable_pay[i],SCROP[i],Wtax_credit[i]);
        USC[i] = employee[i].get_usc(taxable_pay[i]);
        prsi[i] = employee[i].get_prsi(taxable_pay[i]);
        net_pay[i] = employee[i].get_net(taxable_pay[i]);
    
    cout << fixed << setprecision(2) << setw(10) << i + 1 << setw(10) taxable_pay[i] << setw(10) << PAYE[i] << setw(10) << USC[i] << setw(10) << prsi[i] << setw(10)<< net_pay[i]<<endl;} return 0;
}
