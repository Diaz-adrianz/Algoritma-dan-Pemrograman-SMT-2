#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string jurusan;
    double ipk;
    string pujian;
};

int main()
{
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    Mahasiswa arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << " (nim nama jurusan ipk): ";
        cin >> arr[i].nim >> arr[i].nama >> arr[i].jurusan >> arr[i].ipk;

        if (arr[i].ipk >= 4.0)
            arr[i].pujian = "ERROR";
        else if (arr[i].ipk >= 3.75)
            arr[i].pujian = "Sangat memuaskan";
        else if (arr[i].ipk >= 3.50)
            arr[i].pujian = "Memuaskan";
        else if (arr[i].ipk >= 3.0)
            arr[i].pujian = "Baik";
        else
            arr[i].pujian = "Gibran dan Bahlil";
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Nim: " << arr[i].nim << endl
             << "Nama: " << arr[i].nama << endl
             << "Jurusan: " << arr[i].jurusan << endl
             << "IPK: " << arr[i].ipk << endl
             << "Pujian: " << arr[i].pujian << endl;
    }

    return 0;
}
