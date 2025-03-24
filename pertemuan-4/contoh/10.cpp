// Menentukan upah mingguan seorang karyawan

#include <iostream>
using namespace std;

int main()
{
    const int jamNormal = 48;
    const float upahPerjam = 2000, upahLembur = 3000;

    string nama;
    int jjk, lembur;
    float upah;

    cout << "Masukkan nama karyawan: ";
    cin >> nama;

    cout << "Masukkan jumlah jam kerjanya: ";
    cin >> jjk;

    if (jjk <= jamNormal)
        upah = jjk * upahPerjam;
    else
    {
        lembur = jjk - jamNormal;
        upah = (jamNormal * upahPerjam) + (lembur * upahLembur);
    }

    cout << "Upah karyawan: " << upah << endl;

    return 0;
}