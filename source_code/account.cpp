#include "account.h"
#include <bits/stdc++.h>
using namespace std;

namespace project
{
    account::account()
    {
        cout << "Type 1 if you have an account otherwise Type 0\n";
        cin >> have_account;
        if (have_account)
            login_account();
        else
            signup_account();
    }
    void account::login_account()
    {
        cout << "Enter the account name\n";
        cin >> account_name;
        cout << endl;
        cout << "Enter your password \n";
        cin >> account_password;
        cout << endl;
        cout << "Logging in the account....\n\n";
    }
    void account::signup_account()
    {
        cout << "Creating New Account\n";
        cout << "Enter name\n";
        cin >> account_name;
        cout << endl;
        cout << "Enter password for new account\n";
        cin >> account_password;
        cout << endl;
        cout << "An account has been created with name " << account_name << "\n\n";
        login_account();
    }
    void account::logout_account()
    {
        cout << "Logging out of the account...\n\n";
        cout << "Hope you enjoy your movie/webseries...\n\n";
    }
}