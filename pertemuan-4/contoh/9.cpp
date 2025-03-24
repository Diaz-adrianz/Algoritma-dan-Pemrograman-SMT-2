// Menentukan upah mingguan seorang karyawan

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    int jjk, lembur;
    float upah;

    cout << "Masukkan nama karyawan: ";
    cin >> nama;

    cout << "Masukkan jumlah jam kerjanya: ";
    cin >> jjk;

    if (jjk <= 48)
        upah = jjk * 2000;
    else
    {
        lembur = jjk - 48;
        upah = (48 * 2000) + (lembur * 3000);
    }

    cout << "Upah karyawan: " << upah << endl;

    return 0;
}