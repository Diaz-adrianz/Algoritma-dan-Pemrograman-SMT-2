// Konversi bilangan bulat positif ke angka romawi

// DEKLARASI
// n: integer
// hasil: string

// ALGORITMA
// read(n)
// hasil ← ""
// repeat
//     if n >= 1000 then
//         hasil ← hasil + "M"
//         n ← n - 1000
//     else if n >= 900 then
//         hasil ← hasil + "CM"
//         n ← n - 900
//     else if n >= 500 then
//         hasil ← hasil + "D"
//         n ← n - 500
//     else if n >= 400 then
//         hasil ← hasil + "CD"
//         n ← n - 400
//     else if n >= 100 then
//         hasil ← hasil + "C"
//         n ← n - 100
//     else if n >= 90 then
//         hasil ← hasil + "XC"
//         n ← n - 90
//     else if n >= 50 then
//         hasil ← hasil + "L"
//         n ← n - 50
//     else if n >= 40 then
//         hasil ← hasil + "XL"
//         n ← n - 40
//     else if n >= 10 then
//         hasil ← hasil + "X"
//         n ← n - 10
//     else if n >= 9 then
//         hasil ← hasil + "IX"
//         n ← n - 9
//     else if n >= 5 then
//         hasil ← hasil + "V"
//         n ← n - 5
//     else if n >= 4 then
//         hasil ← hasil + "IV"
//         n ← n - 4
//     else if n >= 1 then
//         hasil ← hasil + "I"
//         n ← n - 1
//     end if
// until n = 0
// write(hasil)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string roman;

    cout << "Masukkan angka: ";
    cin >> n;

    do
    {
        if (n >= 1000)
        {
            roman += "M";
            n -= 1000;
        }
        else if (n >= 900)
        {
            roman += "CM";
            n -= 900;
        }
        else if (n >= 500)
        {
            roman += "D";
            n -= 500;
        }
        else if (n >= 400)
        {
            roman += "CD";
            n -= 400;
        }
        else if (n >= 100)
        {
            roman += "C";
            n -= 100;
        }
        else if (n >= 90)
        {
            roman += "XC";
            n -= 90;
        }
        else if (n >= 50)
        {
            roman += "L";
            n -= 50;
        }
        else if (n >= 40)
        {
            roman += "XL";
            n -= 40;
        }
        else if (n >= 10)
        {
            roman += "X";
            n -= 10;
        }
        else if (n >= 9)
        {
            roman += "IX";
            n -= 9;
        }
        else if (n >= 5)
        {
            roman += "V";
            n -= 5;
        }
        else if (n >= 4)
        {
            roman += "IV";
            n -= 4;
        }
        else if (n >= 1)
        {
            roman += "I";
            n -= 1;
        }
    } while (n != 0);

    cout << "Angka dalam romawi: " << roman << endl;

    return 0;
}