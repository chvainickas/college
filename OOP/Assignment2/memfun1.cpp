#include <iostream>
#include <iomanip>
#include <conio.h>
#include "header1.h"
using namespace std ;

/// Function declaration for the login method
bool validation::Valid_user()
{
    int attempts = 0;

    while (attempts < 2)
    {
        attempts++;

        cout << "You have " << 3 - attempts << " attempt(s) left to log in" << endl;

        string username, password;
        cout << "________________" << endl;
        cout << "|         Login screen        |" << endl;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|Key in username (User1/User2) ? ";
        cin >> username;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|" << setw(37) << "|" << endl;
        cout << "|Key in password (password) ? ";

        char c = ' ';
        password = "";
        while (c != 13)
        {
            c = getch();
            if (c != 13)
            {
                password = password + c;
                cout << "*";
            }
        }

        cout << "|" << setw(37) << "|" << endl;
        cout << "|" << setw(37) << "|" << endl;

        if ((username == "User1" || username == "User2") && password == "password")
        {
            cout << "|        Valid User        |" << endl;
            cout << "|__________________________|" << endl;
            return true;
        }
        else
        {
            cout << "| Invalid user or password  |" << endl;
        }
    }

    cout << "You have reached the maximum number of login attempts. Program will now exit." << endl;
    exit(0);
}