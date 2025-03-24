// Menentukan upah mingguan karyawan

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
    switch (gol)
    {
    case 'A':
        upahPerJam = 4000;
        break;
    case 'B':
        upahPerJam = 5000;
        break;
    case 'C':
        upahPerJam = 6000;
        break;
    case 'D':
        upahPerJam = 7500;
        break;
    }
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