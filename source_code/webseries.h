#ifndef __webseries
#define __webseries
#include "DATA.h"
#include <string>
using namespace std;

namespace project
{
    class webseries : public Data
    {
        int genre;
        char language;
        string CH;
        int no_of_season;

    public:
        void get_genre();
        void get_language();
        void show_web();
    };
}
#endif