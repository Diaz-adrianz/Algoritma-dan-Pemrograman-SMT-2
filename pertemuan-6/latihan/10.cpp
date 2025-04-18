// Jarak tanggal

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

void jarakHari(Tgl t, Tgl tLama, int &hari)
{
    int tHari = t.dd;
    for (int m = 1; m < t.mm; m++)
        tHari += jumlahHariDalamBulan(m, t.yy);
    for (int y = 0; y < t.yy; y++)
        if (tahunKabisat(y))
            tHari += 366;
        else
            tHari += 365;

    int tlHari = tLama.dd;
    for (int m = 1; m < tLama.mm; m++)
        tlHari += jumlahHariDalamBulan(m, tLama.yy);
    for (int y = 0; y < tLama.yy; y++)
        if (tahunKabisat(y))
            tlHari += 366;
        else
            tlHari += 365;

    hari = tHari - tlHari;
}

int main()
{
    Tgl t, tLama;
    int hari;

    tLama.dd = 1;
    tLama.mm = 1;
    tLama.yy = 1999;

    cout << "Masukkan tanggal (dd mm yy): ";
    cin >> t.dd >> t.mm >> t.yy;

    jarakHari(t, tLama, hari);
    cout << "Jarak hari: " << hari << " hari" << endl;
    return 0;
}
