// baca data

#include <iostream>
using namespace std;

struct MataKuliah
{
    string kode;
    char nilai;
};

struct Mahasiswa
{
    int nim;
    string nama;
    float ipk;
    MataKuliah mk[];
};

void bacaData(int n, Mahasiswa *mhs)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan NIM: ";
        cin >> mhs[i].nim;
        cout << "Masukkan nama mahasiswa: ";
        cin >> mhs[i].nama;
        cout << "Masukkan ipk mahasiswa: ";
        cin >> mhs[i].ipk;

        for (int j = 0; j < 4; j++)
        {
            cout << "Masukkan kode mata kuliah: ";
            cin >> mhs[i].mk[j].kode;
            cout << "Masukkan nilai mata kuliah: ";
            cin >> mhs[i].mk[j].nilai;
        }
    }
}