#ifndef __movie
#define __movie
#include "DATA.h"
#include <string>
using namespace std;

namespace project
{
    class movie : public Data
    {
        int genre;
        char language;
        string CH;

    public:
        movie();
        void get_genre();
        void get_language();
        void show_movie();
    };

}
#endif