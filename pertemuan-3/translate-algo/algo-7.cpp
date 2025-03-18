// durasi biaya percakapan
#include <iostream>
using namespace std;

struct Jam
{
    int hh;
    int mm;
    int ss;
};

int main()
{
    const float biayaPerDetik = 50;
    Jam j1, j2, j3;
    int totalDetik1, totalDetik2, sisa, durasi;
    float biaya;

    cout << "Masukkan waktu mulai" << endl;
    cout << "Berapa jam? ";
    cin >> j1.hh;
    cout << "Berapa menit? ";
    cin >> j1.mm;
    cout << "Berapa detik? ";
    cin >> j1.ss;

    cout << "\nMasukkan waktu selesai" << endl;
    cout << "Berapa jam? ";
    cin >> j2.hh;
    cout << "Berapa menit? ";
    cin >> j2.mm;
    cout << "Berapa detik? ";
    cin >> j2.ss;

    totalDetik1 = (j1.hh * 3600) + (j1.mm * 60) + j1.ss;
    totalDetik2 = (j2.hh * 3600) + (j2.mm * 60) + j2.ss;
    durasi = totalDetik2 - totalDetik1;
    biaya = durasi * biayaPerDetik;

    j3.hh = durasi / 3600;
    sisa = durasi % 3600;
    j3.mm = sisa / 60;
    j3.ss = sisa % 60;

    cout << "\nDurasi: " << durasi << " detik" << endl;
    cout << j3.hh << " jam, " << j3.mm << " menit, " << j3.ss << " detik" << endl;
    cout << "Biaya: " << biaya << endl;

    return 0;
}