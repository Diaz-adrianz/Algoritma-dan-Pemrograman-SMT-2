// Nilai rata-rata setiap siswa

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, i, j;
    string nama;
    float nilai, jumlah, rerata;

    cout << "Masukkan jumlah siswa dan pelajaran: ";
    cin >> n >> m;

    i = 1;
    while (i <= n)
    {
        cout << "Masukkan nama siswa: ";
        cin >> nama;

        j = 1;
        jumlah = 0;
        while (j <= m)
        {
            cout << "Masukkan nilai ke-" << j << ": ";
            cin >> nilai;

            jumlah += nilai;
            j++;
        }

        rerata = (float)jumlah / m;
        cout << "Rata-rata: " << rerata << endl;

        i++;
    }

    return 0;
}