// hitung biaya percakapan

#include <iostream>
#include <string>
using namespace std;

struct Jam
{
    int hh, mm, ss;
};

int main()
{
    Jam j1, j2, j3;
    string kodeWil;
    int durasi;
    float pulsWil, tarifWil, pulsa, biaya;

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

    cout << "Kode wilayah tujuan percakapan: ";
    cin >> kodeWil;

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

    durasi = (j3.hh * 3600) + (j3.mm * 60) + j3.ss;

    if (kodeWil == "021")
    {
        pulsWil = 60;
        tarifWil = 150;
    }
    else if (kodeWil == "0751")
    {
        pulsWil = 30;
        tarifWil = 250;
    }
    else if (kodeWil == "0737")
    {
        pulsWil = 25;
        tarifWil = 375;
    }
    else if (kodeWil == "0912")
    {
        pulsWil = 20;
        tarifWil = 415;
    }
    else if (kodeWil == "0981")
    {
        pulsWil = 17;
        tarifWil = 510;
    }

    pulsa = durasi / pulsWil;
    biaya = pulsa * tarifWil;

    cout << j3.hh << " jam, " << j3.mm << " menit, " << j3.ss << " detik" << endl;
    cout << "Durasi: " << durasi << " detik" << endl;
    cout << "Biaya: " << biaya << endl;

    return 0;
}