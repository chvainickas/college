//
// Created by student on 19/01/2023.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class validation
{
public:
    bool Valid_user();

private:
    string dm_Username, dm_password;
    int c = 0;
    char let = ' ';
};

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
    if (dm_Username == "User2" && dm_password == "password")
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

int main()
{
    system("COLOR 74");
    class validation user1;
    user1.Valid_user();
    return 0;
}