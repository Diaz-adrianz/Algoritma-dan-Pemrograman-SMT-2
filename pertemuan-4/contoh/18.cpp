// Menentukan jam berikutnya setelah jam sekarang ditambah 1 detik

#include <iostream>
using namespace std;

struct Jam
{
    int hh, mm, ss;
};

int main()
{
    Jam j;

    cout << "Berapa jam? ";
    cin >> j.hh;
    cout << "Berapa menit? ";
    cin >> j.mm;
    cout << "Berapa detik? ";
    cin >> j.ss;

    if (j.ss + 1 < 60)
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

    cout << j.hh << " jam, " << j.mm << " menit, " << j.ss << " detik" << endl;

    return 0;
}