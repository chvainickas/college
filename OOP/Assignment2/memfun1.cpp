#include <iostream>
#include <iomanip>
#include "header1.h"
using namespace std ;

bool validation::Valid_user()
{
start:
    c = c + 1;

    if (c > 2)
    {
        cout << "Goodbye" << endl;
        return (0);
    }

    cout << "You have two attempts to log on" << endl;

start2:
    cout << "________________" << endl;
    cout << "|         Login screen        |" << endl;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|" << setw(37) << "|" << endl;

    cout << "|Key in username (User1) ? ";
    cin >> dm_Username;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|Key in password (password) ? ";
    char c = ' ';
    dm_password = "";
    while (c != 13)
    {
        c = getch();
        if (c != 13)
        {
            dm_password = dm_password + c;
            cout << "*";
        }
    }
    /// cin >> dm_password;
    cout << "|" << setw(37) << "|" << endl;
    cout << "|" << setw(37) << "|" << endl;

    if (dm_Username == "User1" && dm_password == "password")
    {
        cout << "Valid user " << endl;
    }
    else
    {
        cout << "| invalid user         " << endl;
        goto start;
    }
    cout << "|        Valid User        |" << endl;
    cout << "|__________________________|" << endl;
}