// Upah karyawan

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int jamNormal = 48;
    const float upahLembur = 3000;
    string nama;
    char gol, jawab;
    int jjk, upahPerJam;
    float lembur, upahTotal;

    do
    {
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Masukkan golongan (A/B/C/D): ";
        cin >> gol;
        cout << "Masukkan jumlah jam kerja: ";
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
            upahTotal = jamNormal * upahPerJam + lembur * upahLembur;
        }

        cout << "Upah total: " << upahTotal << endl;
        cout << "Ulangi untuk karyawan yang lain? (y/t) ";
        cin >> jawab;
    } while (jawab != 't');

    return 0;
}