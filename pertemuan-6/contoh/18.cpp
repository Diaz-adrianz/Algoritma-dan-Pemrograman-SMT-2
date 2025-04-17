// jam berikutnya

#include <iostream>
using namespace std;

struct Jam
{
    int hh, mm, ss;
};

void jamBerikutnya(Jam &j)
{
    int totalDetik, sisaDetik;

    if ((j.ss + 1) < 60)
        j.ss += 1;
    else
    {
        j.ss = 0;
        if (j.mm + 1 < 60)
            j.mm += 1;
        else
        {
            j.mm = 0;
            if (j.hh + 1 < 24)
                j.hh += 1;
            else
                j.hh = 0;
        }
    }
}