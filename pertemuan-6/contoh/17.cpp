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

    totalDetik = j.hh * 3600 + j.mm * 60 + j.ss;
    totalDetik += 1;

    j.hh = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    j.mm = sisaDetik / 60;
    j.ss = sisaDetik % 60;
}