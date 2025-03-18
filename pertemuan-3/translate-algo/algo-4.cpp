// Konversi waktu ke detik
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
    Jam j;
    int totalDetik;

    cout << "Masukkan waktu tempuh" << endl;
    cout << "Berapa jam? ";
    cin >> j.hh;
    cout << "Berapa menit? ";
    cin >> j.mm;
    cout << "Berapa detik? ";
    cin >> j.ss;

    totalDetik = (j.hh * 3600) + (j.mm * 60) + j.ss;
    cout << "Total tempuh dalam detik: " << totalDetik << endl;

    return 0;
}