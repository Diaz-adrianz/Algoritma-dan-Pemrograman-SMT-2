// Hitung durasi

#include <iostream>
using namespace std;

struct Jam
{
    int hh, mm, ss;
};

int main()
{
    Jam j1, j2, j3;

    cout << "Pertama, berapa jam? ";
    cin >> j1.hh;
    cout << "Berapa menit? ";
    cin >> j1.mm;
    cout << "Berapa detik? ";
    cin >> j1.ss;

    cout << "Kedua, berapa jam? ";
    cin >> j2.hh;
    cout << "Berapa menit? ";
    cin >> j2.mm;
    cout << "Berapa detik? ";
    cin >> j2.ss;

    if (j2.ss >= j1.ss)
        j3.ss = j2.ss - j1.ss;
    else
    {
        j3.ss = (j2.ss + 60) - j1.ss;
        j2.mm -= 1;
    }

    if (j2.mm >= j1.mm)
        j3.mm = j2.mm - j1.mm;
    else
    {
        j3.mm = (j2.mm + 60) - j1.mm;
        j2.hh -= 1;
    }

    if (j2.hh >= j1.hh)
        j3.hh = j2.hh - j1.hh;
    else
        j3.hh = (j2.hh + 24) - j1.hh;

    cout << j3.hh << " jam, " << j3.mm << " menit, " << j3.ss << " detik" << endl;

    return 0;
}