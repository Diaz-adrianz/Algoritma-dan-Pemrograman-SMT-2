#include <iostream>
using namespace std;

void luasLingkaran()
{
    const float PI = 3.14;
    float r, luas;

    cout << "Masukkan nilai jari-jari: ";
    cin >> r;

    luas = PI * r * r;
    cout << "Luas lingkaran dengan jari-jari " << r << " = " << luas << endl;
}

void luasSegitiga()
{
    float a, t, luas;

    cout << "Masukkan nilai alas dan tinggi (a t): ";
    cin >> a >> t;

    luas = (a * t) / 2;
    cout << "Luas segitiga dengan alas " << a << " dan tinggi " << t << " = " << luas << endl;
}

void luasJajarGenjang()
{
    float a, t, luas;

    cout << "Masukkan nilai alas dan tinggi (a t): ";
    cin >> a >> t;

    luas = (a * t);
    cout << "Luas jajar genjang dengan alas " << a << " dan tinggi " << t << " = " << luas << endl;
}

void luasLayangLayang()
{
    float d1, d2, luas;

    cout << "Masukkan nilai diameter satu dan dua (d1 d2): ";
    cin >> d1 >> d2;

    luas = 0.5 * d1 * d2;
    cout << "Luas layang-layang dengan diameter " << d1 << " dan  " << d2 << " = " << luas << endl;
}

void menu()
{
    cout << "\n======= MENU =======" << endl
         << "1. Luas lingkaran" << endl
         << "2. Luas segitiga" << endl
         << "3. Luas jajar genjang" << endl
         << "4. Luas layang-layang" << endl
         << "0. Keluar" << endl;
}

int main()
{
    bool play = true;

    while (play)
    {
        int pil;
        menu();

        cout << "Masukkan pilihan anda: ";
        cin >> pil;

        if (pil == 1)
            luasLingkaran();
        else if (pil == 2)
            luasSegitiga();
        else if (pil == 3)
            luasJajarGenjang();
        else if (pil == 4)
            luasLayangLayang();
        else if (pil == 0)
            play = false;
    }
    return 0;
}
