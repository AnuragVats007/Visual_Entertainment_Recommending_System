#include "movie.h"
#include <bits/stdc++.h>
using namespace std;

namespace project
{
    movie::movie()
    {
        //num=++count;
    }
    void movie::get_genre()
    {
        if (language == 'H')
        {
            cout << "CHOOSE THE GENRE(PRESS THE NUMBER)\n";
            cout << "1.ACTION\n2.BIOPIC\n3.COMEDY\n4.THRILLER\n";
            cin >> genre;
            cout << endl;
        }
        else if (language == 'E')
        {
            cout << "CHOOSE THE GENRE(PRESS THE NUMBER)\n";
            cout << "1.ACTION\n5.FICTION\n6.ANIMATED\n7.SCI-FI\n8.HORROR\n";
            cin >> genre;
            cout << endl;
        }
        else
        {
            cout << "INVALID LANGUAGE SELECTED\n";
            cout << endl;
        }
    }
    void movie::get_language()
    {
        cout << "PRESS 'H' FOR HINDI OR PRESS 'E' FOR ENGLISH\n";
        cout << "ENTER YOUR CHOICE: \n";
        cin >> language;
        cout << endl;
    }
    void movie::show_movie()
    {
        cout << endl;
        cout << "HERE ARE SOME RECOMMENDATIONS FROM OUR SIDE: \n";
        if (language == 'H')
            SEARCH_hindiM(genre);
        else if (language == 'E')
            SEARCH_englishM(genre);
        else
            cout << "INVALID CHOICE\n";

        cout << endl;

        cin.ignore();
        cout << "ENTER YOUR CHOICE: \n";
        getline(cin, CH);
        rating_(CH);
        cout << "Playing " << CH << "...\n";
        cout << endl;
        
    }
}