#include "DATA.h"
#include <bits/stdc++.h>
using namespace std;

namespace project
{
    multimap<int, string> hindi_movies;  
    multimap<int, string> english_movies;
    multimap<int, string> hindi_webseries;
    multimap<int, string> english_webseries;
    map<string, int> seasons;
    map<string, float> rating;
    void Data ::SEARCH_hindiM(int a)
    {
        hindi_movies.insert({3, "Hera Pheri"});
        hindi_movies.insert({3, "Phir Hera Pheri"});
        hindi_movies.insert({3, "Good News"});
        hindi_movies.insert({3, "Welcome"});
        hindi_movies.insert({3, "3 Idiots"});
        hindi_movies.insert({1, "War"});
        hindi_movies.insert({1, "Brothers"});
        hindi_movies.insert({1, "Badlapur"});
        hindi_movies.insert({1, "Tanhaji - The Unsung Warrior"});
        hindi_movies.insert({1, "Ghayal"});
        hindi_movies.insert({2, "M.S. Dhoni - The Untold Story"});
        hindi_movies.insert({2, "Bhaag Milkha Bhaag"});
        hindi_movies.insert({2, "Paan Singh Tomar"});
        hindi_movies.insert({2, "Dangal"});
        hindi_movies.insert({2, "The Legend Of Bhagat Singh"});
        hindi_movies.insert({2, "Sarbjit"});
        hindi_movies.insert({4, "Andhadhun"});
        hindi_movies.insert({4, "Dhrishyam"});
        hindi_movies.insert({4, "A Wednesday"});
        hindi_movies.insert({4, "Raat Akeli Hai"});
        hindi_movies.insert({4, "Tumbaad"});
        for (auto it = hindi_movies.begin(); it != hindi_movies.end(); it++)
        {
            if (it->first == a)
                cout << it->second << endl;
        }
    }
    void Data ::SEARCH_englishM(int a)
    {
        english_movies.insert({6, "Kungfu Panda"});
        english_movies.insert({6, "Despicable Me"});
        english_movies.insert({6, "Minions"});
        english_movies.insert({6, "Hotel Transylvania"});
        english_movies.insert({7, "Intersteller"});
        english_movies.insert({7, "Inception"});
        english_movies.insert({7, "Matrix"});
        english_movies.insert({7, "Gravity"});
        english_movies.insert({8, "Conjuring"});
        english_movies.insert({8, "Annabelle"});
        english_movies.insert({8, "The Exorcist"});
        english_movies.insert({8, "Sinister"});
        english_movies.insert({5, "Avengers"});
        english_movies.insert({5, "The Dark Knight"});
        english_movies.insert({5, "Godzilla"});
        english_movies.insert({5, "Predator"});
        english_movies.insert({1, "John Wick"});
        english_movies.insert({1, "Hobbs & Shaw"});
        english_movies.insert({1, "Fast and Furious"});
        for (auto it = english_movies.begin(); it != english_movies.end(); it++)
        {
            if (it->first == a)
                cout << it->second << endl;
        }
    }
    void Data ::SEARCH_englishw(int a)
    {
        english_webseries.insert({4, "Breaking Bad"});
        english_webseries.insert({4, "The Walking Dead"});
        english_webseries.insert({4, "Invincible"});
        english_webseries.insert({4, "Line Of Duty"});
        english_webseries.insert({4, "Sherlock"});
        english_webseries.insert({3, "Gravity Falls"});
        english_webseries.insert({3, "Death In Paradise"});
        english_webseries.insert({3, "The Flight Attendant"});
        english_webseries.insert({3, "Cowboy Bebop"});
        english_webseries.insert({3, "Scream"});
        english_webseries.insert({1, "The Owl House"});
        english_webseries.insert({1, "Samurai X"});
        english_webseries.insert({1, "Dragon Ball Z"});
        english_webseries.insert({1, "Blood Drive"});
        english_webseries.insert({1, "Comrade Detective"});
        english_webseries.insert({9, "The Wire"});
        english_webseries.insert({9, "Game Of Thrones"});
        english_webseries.insert({9, "The Wolf"});
        english_webseries.insert({9, "The Island"});
        for (auto it : english_webseries)
        {
            if (it.first == a)
            {
                cout << it.second << endl;
            }
        }
    }
    void Data ::SEARCH_hindiw(int a)
    {
        hindi_webseries.insert({4, "The Family Man"});
        hindi_webseries.insert({4, "Mirzapur"});
        hindi_webseries.insert({4, "Sacred Games"});
        hindi_webseries.insert({4, "Asur"});
        hindi_webseries.insert({4, "Special Ops"});
        hindi_webseries.insert({4, "Breathe"});
        hindi_webseries.insert({10, "Scam 1992: The Harshad Mehta Story"});
        hindi_webseries.insert({10, "Paatal Lok"});
        hindi_webseries.insert({10, "Criminal Justice"});
        hindi_webseries.insert({10, "Aarya"});
        hindi_webseries.insert({11, "Bandish Bandits"});
        hindi_webseries.insert({11, "Made In Heaven"});
        hindi_webseries.insert({11, "Little Things"});
        hindi_webseries.insert({11, "Out Of Love"});
        hindi_webseries.insert({3, "Panchayat"});
        hindi_webseries.insert({3, "Aspirants"});
        hindi_webseries.insert({3, "Kota Factory"});
        hindi_webseries.insert({3, "Hostel Daze"});
        for (auto it = hindi_webseries.begin(); it != hindi_webseries.end(); it++)
        {
            if (it->first == a)
            {
                cout << it->second << endl;
            }
        }
    }
    void Data ::seasons_(string a)
    {
        seasons.insert({"Breaking Bad", 5});
        seasons.insert({"The Walking Dead", 10});
        seasons.insert({"Invincible", 1});
        seasons.insert({"Line Of Duty", 5});
        seasons.insert({"Sherlock", 4});
        seasons.insert({"Gravity Falls", 2});
        seasons.insert({"Death In Paradise", 10});
        seasons.insert({"The Flight Attendant", 1});
        seasons.insert({"Cowboy Bebop", 1});
        seasons.insert({"Scream", 3});
        seasons.insert({"The Owl House", 2});
        seasons.insert({"Samurai X", 1});
        seasons.insert({"Dragon Ball Z", 7});
        seasons.insert({"Blood Drive", 1});
        seasons.insert({"Comrade Detective", 1});
        seasons.insert({"The Wire", 5});
        seasons.insert({"Game Of Thrones", 8});
        seasons.insert({"The Wolf", 1});
        seasons.insert({"The Island", 1});
        seasons.insert({"The Family Man", 2});
        seasons.insert({"Mirzapur", 2});
        seasons.insert({"Sacred Games", 2});
        seasons.insert({"Asur", 1});
        seasons.insert({"Special Ops", 1});
        seasons.insert({"Breathe", 2});
        seasons.insert({"Scam 1992 -The Hershad Mehta Story", 1});
        seasons.insert({"Paatal Lok", 1});
        seasons.insert({"Criminal Justice", 1});
        seasons.insert({"Bandish Bandits", 1});
        seasons.insert({"Made In Heaven", 1});
        seasons.insert({"Little Things", 3});
        seasons.insert({"Out Of Love", 2});
        seasons.insert({"Panchayat", 1});
        seasons.insert({"Aspirants", 1});
        seasons.insert({"Kota Factory", 1});
        seasons.insert({"Hostel Daze", 1});
        cout << "No of seasons of " << a << ": ";
        cout << seasons[a] << endl;
    }
    void Data ::rating_(string a)
    {
        rating.insert({"Hera Pheri", 8.2});
        rating.insert({"Phir Hera Pheri", 7});
        rating.insert({"Good News", 6.9});
        rating.insert({"Welcome", 6.9});
        rating.insert({"3 Idiots", 8.4});
        rating.insert({"War", 6.5});
        rating.insert({"Brothers", 7.1});
        rating.insert({"Badlapur", 7.4});
        rating.insert({"Tanhaji - The Unsung Warrior", 7.6});
        rating.insert({"Ghayal", 7.6});
        rating.insert({"M.S. Dhoni - The Untold Story", 7.9});
        rating.insert({"Bhaag Milkha Bhaag", 8.2});
        rating.insert({"Paan Singh Tomar", 8.2});
        rating.insert({"Dangal", 8.4});
        rating.insert({"The Legend Of Bhagat Singh", 8.1});
        rating.insert({"Sarbjit", 7.3});
        rating.insert({"Andhadhun", 8.2});
        rating.insert({"Dhrishyam", 8.2});
        rating.insert({"A Wednesday", 8.1});
        rating.insert({"Raat Akeli Hai", 7.3});
        rating.insert({"Tumbaad", 8.3});
        rating.insert({"Kungfu Panda", 7.6});
        rating.insert({"Despicable Me", 7.6});
        rating.insert({"Minions", 6.4});
        rating.insert({"Hotel Transylvania", 7.1});
        rating.insert({"Intersteller", 8.6});
        rating.insert({"Inception", 8.8});
        rating.insert({"Matrix", 8.7});
        rating.insert({"Gravity", 7.7});
        rating.insert({"Conjuring", 7.5});
        rating.insert({"Annabelle", 5.4});
        rating.insert({"The Exorcist", 8});
        rating.insert({"Sinister", 6.8});
        rating.insert({"Avengers", 8});
        rating.insert({"The Dark Knight", 9});
        rating.insert({"Godzilla", 6});
        rating.insert({"Predator", 7.8});
        rating.insert({"John Wick", 7.4});
        rating.insert({"Hobbs & Shaw", 6.4});
        rating.insert({"Fast and Furious", 6.8});
        rating.insert({"Breaking Bad", 9.4});
        rating.insert({"The Walking Dead", 8.2});
        rating.insert({"Invincible", 8.8});
        rating.insert({"Line Of Duty", 8.7});
        rating.insert({"Sherlock", 9.1});
        rating.insert({"Gravity Falls", 8.9});
        rating.insert({"Death In Paradise", 7.8});
        rating.insert({"The Flight Attendant", 7.1});
        rating.insert({"Cowboy Bebop", 9.0});
        rating.insert({"Scream", 7.5});
        rating.insert({"The Owl House", 8.1});
        rating.insert({"Samurai X", 8.5});
        rating.insert({"Dragon Ball Z", 8.7});
        rating.insert({"Blood Drive", 7.3});
        rating.insert({"Comrade Detective", 7.3});
        rating.insert({"The Wire", 9.3});
        rating.insert({"Game Of Thrones", 9.2});
        rating.insert({"The Wolf", 9.1});
        rating.insert({"The Island", 9.1});
        rating.insert({"The Family Man", 8.8});
        rating.insert({"Mirzapur", 8.4});
        rating.insert({"Sacred Games", 8.4});
        rating.insert({"Asur", 8.5});
        rating.insert({"Special Ops", 8.6});
        rating.insert({"Breathe", 8.3});
        rating.insert({"Scam 1992 -The Hershad Mehta Story", 9.6});
        rating.insert({"Paatal Lok", 7.8});
        rating.insert({"Criminal Justice", 8.1});
        rating.insert({"Aarya", 7.9});
        rating.insert({"Bandish Bandits", 8.7});
        rating.insert({"Made In Heaven", 8.3});
        rating.insert({"Little Things", 8.3});
        rating.insert({"Out Of Love", 7.1});
        rating.insert({"Panchayat", 8.8});
        rating.insert({"Aspirants", 9.6});
        rating.insert({"Kota Factory", 9.2});
        rating.insert({"Hostel Daze", 8.6});
        cout << "Rating of " << a << " is :" << rating[a] << endl;
    }
}