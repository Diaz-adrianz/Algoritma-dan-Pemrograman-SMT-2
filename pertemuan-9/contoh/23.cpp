// baca data

#include <iostream>
using namespace std;

struct Mahasiswa
{
    int nim;
    string nama;
    float ipk;
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
    }
}