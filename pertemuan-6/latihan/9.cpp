// tanggal sebelumnya

#include <iostream>
using namespace std;

bool tahunKabisat(int tahun)
{
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int jumlahHariDalamBulan(int bulan, int tahun)
{
    if (bulan == 2)
        return tahunKabisat(tahun) ? 29 : 28;
    else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
        return 30;
    else
        return 31;
}

struct Tgl
{
    int dd, mm, yy;
};

void tanggalSebelumnya(Tgl &t)
{
    t.dd--;
    if (t.dd < 1)
    {
        t.mm--;
        if (t.mm < 1)
        {
            t.mm = 12;
            t.yy--;
        }
        t.dd = jumlahHariDalamBulan(t.mm, t.yy);
    }
}

int main()
{
    Tgl t;

    cout << "Masukkan tanggal (dd mm yy): ";
    cin >> t.dd >> t.mm >> t.yy;

    tanggalSebelumnya(t);
    cout << "Tanggal sebelumnya: " << t.dd << '-' << t.mm << "-" << t.yy << endl;
    return 0;
}
