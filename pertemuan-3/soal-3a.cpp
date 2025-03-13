// dibaca dua buah tanggal (dd:mm:yy)
// Tulislah algoritma untuk menghitung berapa hari jarak kedua tanggal tersebut.

#include <iostream>
using namespace std;

struct Tanggal
{
    int dd;
    int mm;
    int yy;
};

int main()
{
    Tanggal tanggalSatu, tanggalDua, tanggalPerbedaan;
    int totalHariSatu, totalHariDua, perbedaanHari;

    cout << "--- Tanggal pertama" << endl;
    cout << "Masukkan berapa tahun: ";
    cin >> tanggalSatu.yy;
    cout << "Masukkan berapa bulan: ";
    cin >> tanggalSatu.mm;
    cout << "Masukkan berapa hari: ";
    cin >> tanggalSatu.dd;

    cout << endl;

    cout << "--- Tanggal kedua" << endl;
    cout << "Masukkan berapa tahun: ";
    cin >> tanggalDua.yy;
    cout << "Masukkan berapa bulan: ";
    cin >> tanggalDua.mm;
    cout << "Masukkan berapa hari: ";
    cin >> tanggalDua.dd;

    cout << endl;

    totalHariSatu = (tanggalSatu.yy * 365) + (tanggalSatu.mm * 30) + (tanggalSatu.dd);
    totalHariDua = (tanggalDua.yy * 365) + (tanggalDua.mm * 30) + (tanggalDua.dd);
    perbedaanHari = totalHariDua - totalHariSatu;

    tanggalPerbedaan.yy = perbedaanHari / 365;
    tanggalPerbedaan.mm = perbedaanHari % 365 / 30;
    tanggalPerbedaan.dd = perbedaanHari % 365 % 30;

    cout << "Perbedaan kedua tanggal: ";
    cout << tanggalPerbedaan.yy << " tahun, " << tanggalPerbedaan.mm << " bulan, " << tanggalPerbedaan.dd << " hari" << endl;

    return 0;
}