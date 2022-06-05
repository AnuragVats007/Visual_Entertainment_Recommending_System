#include "DATA.h"
#include "webseries.h"
#include <bits/stdc++.h>
using namespace std;

namespace project
{
    void webseries::get_genre()
    {
        if (language == 'H')
        {
            cout << "CHOOSE THE GENRE(PRESS THE NUMBER)\n";
            cout << "1.ACTION\n3.COMEDY\n4.THRILLER\n10.CRIME\n11.ROMANCE\n";
            cin >> genre;
            cout << endl;
        }
        else if (language == 'E')
        {
            cout << "CHOOSE THE GENRE(PRESS THE NUMBER)\n";
            cout << "1.ACTION\n3.COMEDY\n4.THRILLER\n9.DRAMA\n";
            cin >> genre;
            cout << endl;
        }
        else{
            cout << "INVALID LANGUAGE SELECTED\n";
            cout << endl;
        }
    }
    void webseries::get_language()
    {
        cout << "PRESS 'H' FOR HINDI OR PRESS 'E' FOR ENGLISH\n";
        cout << "ENTER YOUR CHOICE: \n";
        cin >> language;
        cout << endl;
    }
    void webseries::show_web()
    {
        cout << endl;
        cout << "HERE ARE SOME RECOMMENDATIONS FROM OUR SIDE: \n";
        if (language == 'H')
        {
            SEARCH_hindiw(genre);
        }
        else if (language == 'E')
            SEARCH_englishw(genre);
        else
            cout << "INVALID CHOICE\n";

        cout << endl;
        cin.ignore();
        cout << "ENTER YOUR CHOICE: \n";
        getline(cin, CH);
        seasons_(CH);
        rating_(CH);
        cout << "Playing " << CH << "...\n";
        cout << endl;
        
    }
}
