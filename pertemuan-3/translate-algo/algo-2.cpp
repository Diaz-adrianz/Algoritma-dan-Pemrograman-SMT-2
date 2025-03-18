/// Menghitung gaji karyawan
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const double persenTunjangan = 0.2;
    const double persenPajak = 0.15;
    string namaKaryawan, gajiPokokInput;
    double gajiPokok, tunjangan, pajak, gajiBersih;

    cout << "Masukkan nama karyawan: ";
    cin >> namaKaryawan;

    cout << "Masukkan gaji pokok: ";
    cin >> gajiPokokInput;

    gajiPokok = stof(gajiPokokInput);
    tunjangan = persenTunjangan * (gajiPokok);
    pajak = persenPajak * ((gajiPokok) + tunjangan);
    gajiBersih = (gajiPokok) + tunjangan - pajak;

    cout << "Gaji bersih: " << gajiBersih << endl;

    return 0;
}