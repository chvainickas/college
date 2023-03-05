// Declaration of CLASS

#if !defined HEADER2
#define HEADER2

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
    float dm_SRCOP;
    float dm_tax_credit;
    float dm_net;
};

#endif

