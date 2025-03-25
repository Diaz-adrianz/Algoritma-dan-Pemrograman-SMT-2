// Diskon tiket pesawat untuk usia dibawah 12 tahun

// DEKLARASI
// Type Tanggal:
//   dd, mm, yy: integer
// kotaKeberangkatan, kotaTujuan, nama: string
// tanggalLahir, tanggalKeberangkatan: Tanggal
// usiaPenumpang: integer
// hargaTotal: real
// CONSTANT hargaNormal: real

// ALGORITMA
// read(kotaKeberangkatan, kotaTujuan, nama, tanggalLahir, tanggalKeberangkatan)
// usiaPenumpang ← tanggalKeberangkatan.yy - tanggalLahir.yy
// if tanggalKeberangkatan.mm < tanggalLahir.mm or (tanggalKeberangkatan.mm = tanggalLahir.mm and tanggalKeberangkatan.dd < tanggalLahir.dd) then
//     usiaPenumpang ← usiaPenumpang - 1
// end if
// hargaNormal ← 100000
// hargaTotal ← hargaNormal
// if usiaPenumpang < 12 then
//     hargaTotal ← hargaNormal - (hargaNormal * 25 / 100)
// end if
// write(hargaTotal)

// KODE
#include <iostream>
#include <string>
using namespace std;

struct Tanggal
{
    int dd, mm, yy;
};

int main()
{
    string kotaKeberangkatan, kotaTujuan, nama;
    Tanggal tanggalLahir, tanggalKeberangkatan;
    int usiaPenumpang;
    float hargaNormal = 100000, hargaTotal;

    cout << "Masukkan kota keberangkatan: ";
    cin >> kotaKeberangkatan;
    cout << "Masukkan kota tujuan: ";
    cin >> kotaTujuan;
    cout << "Masukkan nama penumpang: ";
    cin >> nama;
    cout << "Masukkan tanggal lahir penumpang (dd mm yyyy): ";
    cin >> tanggalLahir.dd >> tanggalLahir.mm >> tanggalLahir.yy;
    cout << "Masukkan tanggal keberangkatan (dd mm yyyy): ";
    cin >> tanggalKeberangkatan.dd >> tanggalKeberangkatan.mm >> tanggalKeberangkatan.yy;

    usiaPenumpang = tanggalKeberangkatan.yy - tanggalLahir.yy;

    if (tanggalKeberangkatan.mm < tanggalLahir.mm || (tanggalKeberangkatan.mm == tanggalLahir.mm && tanggalKeberangkatan.dd < tanggalLahir.dd))
        usiaPenumpang -= 1;

    hargaTotal = hargaNormal;

    if (usiaPenumpang < 12)
        hargaTotal -= hargaNormal * 25 / 100;

    cout << "Harga normal: " << hargaNormal << endl;
    cout << "Diskon: " << hargaNormal - hargaTotal << endl;
    cout << "Harga total: " << hargaTotal << endl;

    return 0;
}