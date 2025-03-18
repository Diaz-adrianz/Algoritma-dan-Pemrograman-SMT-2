// konversi waktu ke jam menit detik
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
    int totalDetik, sisa;

    cout << "Masukkan total detik: ";
    cin >> totalDetik;

    j.hh = totalDetik / 3600;
    sisa = totalDetik % 3600;
    j.mm = sisa / 60;
    j.ss = sisa % 60;

    cout << "Hasil: " << j.hh << " jam, " << j.mm << " menit, " << j.ss << " detik" << endl;

    return 0;
}