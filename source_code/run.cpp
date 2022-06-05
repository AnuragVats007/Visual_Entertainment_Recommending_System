#include <bits/stdc++.h>
#include "movie.h"
#include "account.h"
#include "webseries.h"
#include "DATA.h"
using namespace std;

using namespace project;
int main()
{
    cout << "\n\n       ***WELCOME TO VISUAL ENTERTAINMENT RECOMMENDING SYSTEM***       \n\n";
    char c;
    account a;
    do
    {
        cout << "What would you like to watch: \n";
        cout << "# Press 1 for movie\n# Press 2 for webseries\n";
        int choice;
        cin >> choice;
        cout << endl;
        if (choice == 1)
        {
            movie m;
            m.get_language();
            m.get_genre();
            m.show_movie();
        }
        else if (choice == 2)
        {
            webseries w;
            w.get_language();
            w.get_genre();
            w.show_web();
        }
        else
            cout << "INVALID\n";
        cout << "DO YOU WANT TO SEE ANOTHER MOVIE/WEBSERIES (Y/N)\n";
        cout << endl;
        cin >> c;
    } while (c == 'Y' or c == 'y');
    a.logout_account();
    cout << "       ***THANKS FOR VISITING***       \n";
}
