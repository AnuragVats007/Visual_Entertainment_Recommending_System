#ifndef __account
#define __account
#include <string>
using namespace std;

namespace project
{
    class account
    {
    private:
        string account_name;
        string account_password;
        bool have_account;

    public:
        account();
        void signup_account();
        void login_account();
        void logout_account();
    };
}
#endif