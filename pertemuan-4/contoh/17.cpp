// Menghitung indeks nilai ujian mahasiswa

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    float nilai;
    char indeks;

    cout << "Masukkan nama mahasiswa: ";
    cin >> nama;
    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 80)
        indeks = 'A';
    else if (nilai >= 70)
        indeks = 'B';
    else if (nilai >= 55)
        indeks = 'C';
    else if (nilai >= 40)
        indeks = 'D';
    else
        indeks = 'E';

    cout << "\nNama mahasiswa: " << nama << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Indeks: " << indeks << endl;

    return 0;
}