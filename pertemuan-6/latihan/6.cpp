// Jam kurangi sekian menit

#include <iostream>
using namespace std;

struct Jam
{
    int hh, mm, ss;
};

void jamSebelumnya(Jam &j, int m)
{
    int totalDetik, sisaDetik;

    totalDetik = j.hh * 3600 + j.mm * 60 + j.ss;
    totalDetik -= m * 60;

    j.hh = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    j.mm = sisaDetik / 60;
    j.ss = sisaDetik % 60;
}

void jamSebelumnyaAnalisis(Jam &j, int m)
{
    if (j.mm - m > 0)
        j.mm -= m;
    else
    {
        j.mm = 60 + j.mm - m;
        if (j.hh - 1 > 0)
            j.hh -= 1;
        else
            j.hh = 0;
    }
}

int main()
{
    Jam j;
    int m;

    cout << "Masukkan jam (jam, menit, detik): ";
    cin >> j.hh >> j.mm >> j.ss;

    cout << "Kurangi berapa menit? ";
    cin >> m;

    jamSebelumnyaAnalisis(j, m);
    cout << "Jam sebelumnya: " << j.hh << ":" << j.mm << ":" << j.ss << endl;
    return 0;
}