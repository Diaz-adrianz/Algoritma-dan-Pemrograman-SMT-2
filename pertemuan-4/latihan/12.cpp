// Durasi hari antara kedua tanggal

// DEKLARASI

// ALGORITMA

// KODE
#include <iostream>
using namespace std;

struct Tanggal
{
    int dd, mm, yy;
};

bool isKabisat(int tahun)
{
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int jumlahHariBulan(int bulan, int tahun)
{
    if (bulan == 2)
        return isKabisat(tahun) ? 29 : 28;
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
        return 30;
    return 31;
}

int hitungTotalHari(Tanggal t)
{
    int total = t.yy * 365 + t.dd;
    if (t.mm > 1)
        total += 31;
    if (t.mm > 2)
        total += jumlahHariBulan(2, t.yy);
    if (t.mm > 3)
        total += 31;
    if (t.mm > 4)
        total += 30;
    if (t.mm > 5)
        total += 31;
    if (t.mm > 6)
        total += 30;
    if (t.mm > 7)
        total += 31;
    if (t.mm > 8)
        total += 31;
    if (t.mm > 9)
        total += 30;
    if (t.mm > 10)
        total += 31;
    if (t.mm > 11)
        total += 30;
    return total + (t.yy / 4 - t.yy / 100 + t.yy / 400);
}

int main()
{
    Tanggal t1, t2;
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> t1.dd >> t1.mm >> t1.yy;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> t2.dd >> t2.mm >> t2.yy;

    int selisih = hitungTotalHari(t2) - hitungTotalHari(t1);
    cout << "Selisih hari: " << selisih << endl;
    return 0;
}
