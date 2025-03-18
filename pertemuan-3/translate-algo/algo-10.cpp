// aritmetika pecahan
#include <iostream>
using namespace std;

struct Pecahan
{
    int a;
    int b;
};

int main()
{
    Pecahan p1, p2, p3;

    cout << "Masukkan pecahan pertama" << endl;
    cout << "Pembilang: ";
    cin >> p1.a;
    cout << "Penyebut: ";
    cin >> p1.b;

    cout << "\nMasukkan pecahan kedua" << endl;
    cout << "Pembilang: ";
    cin >> p2.a;
    cout << "Penyebut: ";
    cin >> p2.b;

    p3.a = p1.a * p2.b + p1.b * p2.a;
    p3.b = p1.b * p2.b;

    cout << "\nHasil tambah: " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.b - p1.b * p2.a;
    p3.b = p1.b * p2.b;

    cout << "Hasil kurang: " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.a;
    p3.b = p1.b * p2.b;

    cout << "Hasil kali: " << p3.a << "/" << p3.b << endl;

    p3.a = p1.a * p2.b;
    p3.b = p1.b * p2.a;

    cout << "Hasil bagi: " << p3.a << "/" << p3.b << endl;

    return 0;
}