// Tanggal berikutnya

#include <iostream>
using namespace std;

struct Tanggal
{
    int dd, mm, yy;
};

int main()
{
    Tanggal t;

    cout << "Hari ke-berapa? ";
    cin >> t.dd;
    cout << "Bulan ke-berapa? ";
    cin >> t.mm;
    cout << "Tahun ke-berapa? ";
    cin >> t.yy;

    if (t.mm == 4 || t.mm == 6 || t.mm == 9 || t.mm == 11)
    {
        if (t.dd < 30)
            t.dd += 1;
        else
        {
            t.dd = 1;
            t.mm += 1;
        }
    }
    else if (t.mm == 1 || t.mm == 3 || t.mm == 5 ||
             t.mm == 7 || t.mm == 8 || t.mm == 10)
    {
        if (t.dd < 31)
            t.dd += 1;
        else
        {
            t.dd = 1;
            t.mm += 1;
        }
    }
    else if (t.mm == 2)
    {
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
                    t.dd = 1;
                    t.mm += 1;
                }
            }
            else
            {
                t.dd = 1;
                t.mm += 1;
            }
        }
    }
    else if (t.mm == 12)
    {
        if (t.dd < 31)
            t.dd += 1;
        else
        {
            t.dd = 1;
            t.mm = 1;
            t.yy += 1;
        }
    }

    cout << "Tanggal berikutnya: " << endl;
    cout << "Hari: " << t.dd << endl;
    cout << "Bulan: " << t.mm << endl;
    cout << "Tahun: " << t.yy << endl;

    return 0;
}