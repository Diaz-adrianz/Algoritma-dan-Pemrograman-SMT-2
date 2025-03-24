// Jumlah hari dalam sebulan

#include <iostream>
using namespace std;

int main()
{
    int nomorBulan, tahun, jumlahHari;

    cout << "Masukkan nomor bulan: ";
    cin >> nomorBulan;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (nomorBulan == 1 || nomorBulan == 3 || nomorBulan == 5 ||
        nomorBulan == 7 || nomorBulan == 8 || nomorBulan == 10 || nomorBulan == 12)
        jumlahHari = 31;
    else if (nomorBulan == 4 || nomorBulan == 6 || nomorBulan == 9 || nomorBulan == 11)
        jumlahHari = 30;
    else if (nomorBulan == 2)
    {
        if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
            jumlahHari = 29;
        else
            jumlahHari = 28;
    }

    cout << "Jumlah hari: " << jumlahHari << endl;

    return 0;
}