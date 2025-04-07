// hitung rata-rata

#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    float x, sum = 0, rerata;

    cout << "Masukkan nilai ujian: ";
    cin >> x;

    while (x != -1)
    {
        i++;
        sum += x;

        cout << "Masukkan nilai ujian: ";
        cin >> x;
    }

    if (i != 0)
    {
        rerata = (float)sum / i;
        cout << "Rata-rata: " << rerata << endl;
    }
    else
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;

    return 0;
}