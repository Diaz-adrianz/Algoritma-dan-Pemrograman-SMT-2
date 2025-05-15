// Mencetak tabel nilai dan indeks ujian

#include <iostream>
using namespace std;

void cetakNilai(int nilUjian[], int indeksUjian[], int n)
{
    cout << "--------------------" << endl
         << "i\tNilai ujian\tIndeks" << endl
         << "--------------------";

    for (int i = 0; i < n; i++)
        cout << i + 1 << "\t" << nilUjian[i] << "\t" << indeksUjian[i] << endl;

    cout << "--------------------" << endl;
}