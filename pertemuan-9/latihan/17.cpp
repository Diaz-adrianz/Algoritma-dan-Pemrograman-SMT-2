// Mencetak data mahasiswa

#include <iostream>
using namespace std;

struct Mahasiswa
{
    int nim;
    string nama;
    float ipk;
};

void cetakIpkDiAtasDua(Mahasiswa mhs[], int n)
{
    cout << "\n= Mahasiswa dengan IPK > 2" << endl;
    for (int i = 0; i < n; i++)
    {
        if (mhs[i].ipk > 2.0)
            cout << "NIM: " << mhs[i].nim << ", Nama: " << mhs[i].nama << endl;
    }
}

void cetakIpkMinMax(Mahasiswa mhs[], int n)
{
    int idxMin = 0, idxMax = 0;

    for (int i = 1; i < n; i++)
    {
        if (mhs[i].ipk > mhs[idxMax].ipk)
            idxMax = i;
        if (mhs[i].ipk < mhs[idxMin].ipk)
            idxMin = i;
    }

    cout << "\n= Mahasiswa dengan IPK tertinggi" << endl;
    cout << "NIM: " << mhs[idxMax].nim << ", Nama: " << mhs[idxMax].nama << endl;

    cout << "\n= Mahasiswa dengan IPK terendah" << endl;
    cout << "NIM: " << mhs[idxMin].nim << ", Nama: " << mhs[idxMin].nama << endl;
}

void bacaData(int n, Mahasiswa *mhs)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Masukkan NIM: ";
        cin >> mhs[i].nim;
        cout << "Masukkan nama mahasiswa: ";
        cin >> mhs[i].nama;
        cout << "Masukkan ipk mahasiswa: ";
        cin >> mhs[i].ipk;
    }
}

int main()
{
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    Mahasiswa mhss[n];

    bacaData(n, mhss);
    cetakIpkDiAtasDua(mhss, n);
    cetakIpkMinMax(mhss, n);

    return 0;
}