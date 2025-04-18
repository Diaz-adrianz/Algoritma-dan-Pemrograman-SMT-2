// waktu berikutnya

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

struct Tgl
{
    int dd, mm, yy;
};

struct Jam
{
    int hh, mm, ss;
};

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

void hariBerikutnya(string &hari)
{
    if (hari == "senin")
        hari = "selasa";
    else if (hari == "selasa")
        hari = "rabu";
    else if (hari == "rabu")
        hari = "kamis";
    else if (hari == "kamis")
        hari = "jumat";
    else if (hari == "jumat")
        hari = "sabtu";
    else if (hari == "sabtu")
        hari = "minggu";
    else if (hari == "minggu")
        hari = "senin";
}

void jamBerikutnya(Jam &j)
{
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

void tanggalBerikutnya(Tgl &t)
{
    t.dd++;

    if (t.dd > jumlahHariDalamBulan(t.mm, t.yy))
    {
        t.dd = 1;
        t.mm++;

        if (t.mm > 12)
        {
            t.mm = 1;
            t.yy++;
        }
    }
}

void waktuBerjalan(Tgl &t, Jam &j, string &h)
{
    Jam tempJ = j;
    jamBerikutnya(j);
    if (tempJ.hh == 23 && j.hh == 0)
    {
        tanggalBerikutnya(t);
        hariBerikutnya(h);
    }
}

int main()
{
    Tgl tgl;
    Jam jam;
    string hari;

    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> tgl.dd >> tgl.mm >> tgl.yy;
    cout << "Masukkan jam (hh mm ss): ";
    cin >> jam.hh >> jam.mm >> jam.ss;
    cout << "Masukkan hari: ";
    cin >> hari;

    while (true)
    {
        waktuBerjalan(tgl, jam, hari);
        cout << hari << ", "
             << tgl.dd << "-" << tgl.mm << "-" << tgl.yy << " "
             << jam.hh << ":" << jam.mm << ":" << jam.ss << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}