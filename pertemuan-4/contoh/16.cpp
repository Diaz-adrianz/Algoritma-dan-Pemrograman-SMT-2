// menentukan upah mingguan seorang karyawan

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int jamNormal = 48;
    const float upahLembur = 3000;

    string nama;
    char gol;
    int jjk, upahPerJam;
    float lembur, upahTotal;

    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan golongan karyawan: ";
    cin >> gol;
    cout << "Masukkan jumlah jam kerjanya: ";
    cin >> jjk;

    if (gol == 'A')
        upahPerJam = 4000;
    else if (gol == 'B')
        upahPerJam = 5000;
    else if (gol == 'C')
        upahPerJam = 6000;
    else if (gol == 'D')
        upahPerJam = 7500;

    if (jjk <= jamNormal)
        upahTotal = jjk * upahPerJam;
    else
    {
        lembur = jjk - jamNormal;
        upahTotal = (jamNormal * upahPerJam) + (lembur * upahLembur);
    }

    cout << "Upah karyawan: " << upahTotal << endl;

    return 0;
}