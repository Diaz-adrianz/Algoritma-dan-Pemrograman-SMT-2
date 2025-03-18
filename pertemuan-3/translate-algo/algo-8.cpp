// jam berikutnya
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
    int totalDetik, sisaDetik;

    cout << "Masukkan waktu" << endl;
    cout << "Berapa jam? ";
    cin >> j.hh;
    cout << "Berapa menit? ";
    cin >> j.mm;
    cout << "Berapa detik? ";
    cin >> j.ss;

    totalDetik = (j.hh * 3600) + (j.mm * 60) + j.ss;
    totalDetik = totalDetik + 1;

    j.hh = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    j.mm = sisaDetik / 60;
    j.ss = sisaDetik % 60;

    cout << "\nHasil: " << j.hh << " jam, " << j.mm << " menit, " << j.ss << " detik" << endl;

    return 0;
}