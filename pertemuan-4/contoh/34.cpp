// Tanggal berikutnya di bulan Februari

#include <iostream>
using namespace std;

struct Tanggal
{
    int dd, mm, yy;
};

int main()
{
    Tanggal t;

    t.mm = 2;
    cout << "Hari ke-berapa? ";
    cin >> t.dd;
    cout << "Tahun ke-berapa? ";
    cin >> t.yy;

    if (t.dd < 28)
        t.dd += 1;
    else
    {
        if ((t.yy % 4 == 0 && t.yy % 100 != 0) || t.yy % 400 == 0)
        {
            if (t.dd == 28)
                t.dd += 1;
            else
            {
                t.dd == 1;
                t.mm += 1;
            }
        }
        else
        {
            t.dd = 1;
            t.mm += 1;
        }
    }

    cout << "Tanggal berikutnya: " << endl;
    cout << "Hari: " << t.dd << endl;
    cout << "Bulan: " << t.mm << endl;
    cout << "Tahun: " << t.yy << endl;

    return 0;
}