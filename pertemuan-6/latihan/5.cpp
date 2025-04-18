// Nilai integer ke kata-kata

#include <iostream>
#include <string>
using namespace std;

string angkaKeText(int angka)
{
    switch (angka)
    {
    case 1:
        return "satu";
    case 2:
        return "dua";
    case 3:
        return "tiga";
    case 4:
        return "empat";
    case 5:
        return "lima";
    case 6:
        return "enam";
    case 7:
        return "tujuh";
    case 8:
        return "delapan";
    case 9:
        return "sembilan";
    case 0:
        return "nol";
    default:
        return "";
    }
}

void bilanganKeTeks(int b, string &t)
{
    t = "";

    if (b == 0)
    {
        t = "nol";
        return;
    }

    if (b >= 1000)
    {
        int ribu = b / 1000;
        if (ribu == 1)
            t += "seribu ";
        else
            t += angkaKeText(ribu) + " ribu ";
        b %= 1000;
    }

    if (b >= 100)
    {
        int ratus = b / 100;
        if (ratus == 1)
            t += "seratus ";
        else
            t += angkaKeText(ratus) + " ratus ";
        b %= 100;
    }

    if (b >= 20)
    {
        int puluh = b / 10;
        t += angkaKeText(puluh) + " puluh ";
        b %= 10;
    }
    else if (b >= 11 && b <= 19)
    {
        t += angkaKeText(b % 10) + " belas ";
        b = 0;
    }
    else if (b == 10)
    {
        t += "sepuluh ";
        b = 0;
    }

    if (b > 0)
        t += angkaKeText(b) + " ";
}

int main()
{
    int b;
    string t;

    cout << "Masukkan bilangan: ";
    cin >> b;

    if (b < 0 || b > 9999)
    {
        cout << "Bilangan di luar jangkauan!" << endl;
    }
    else
    {
        bilanganKeTeks(b, t);
        cout << "Hasil: " << t << endl;
    }

    return 0;
}
