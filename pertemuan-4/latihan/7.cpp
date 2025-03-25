// Konversi ke angka romawi

// DEKLARASI
// x: integer
// romawi: string

// ALGORITMA
// read(x)
// romawi ← ""
// if x >= 3000 then
//     romawi ← romawi + "MMM"
//     x ← x - 3000
// else if x >= 2000 then
//     romawi ← romawi + "MM"
//     x ← x - 2000
// else if x >= 1000 then
//     romawi ← romawi + "M"
//     x ← x - 1000
// endif
// if x >= 900 then
//     romawi ← romawi + "CM"
//     x ← x - 900
// else if x >= 500 then
//     romawi ← romawi + "D"
//     x ← x - 500
// else if x >= 400 then
//     romawi ← romawi + "CD"
//     x ← x - 400
// else if x >= 300 then
//     romawi ← romawi + "CCC"
//     x ← x - 300
// else if x >= 200 then
//     romawi ← romawi + "CC"
//     x ← x - 200
// else if x >= 100 then
//     romawi ← romawi + "C"
//     x ← x - 100
// endif
// if x >= 90 then
//     romawi ← romawi + "XC"
//     x ← x - 90
// else if x >= 50 then
//     romawi ← romawi + "L"
//     x ← x - 50
// else if x >= 40 then
//     romawi ← romawi + "XL"
//     x ← x - 40
// else if x >= 30 then
//     romawi ← romawi + "XXX"
//     x ← x - 30
// else if x >= 20 then
//     romawi ← romawi + "XX"
//     x ← x - 20
// else if x >= 10 then
//     romawi ← romawi + "X"
//     x ← x - 10
// endif
// if x >= 9 then
//     romawi ← romawi + "IX"
// else if x >= 5 then
//     romawi ← romawi + "V"
//     x ← x - 5
// else if x >= 4 then
//     romawi ← romawi + "IV"
// else if x = 3 then
//     romawi ← romawi + "III"
// else if x = 2 then
//     romawi ← romawi + "II"
// else if x = 1 then
//     romawi ← romawi + "I"
// endif
// write(romawi)

// KODE
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    string romawi = "";

    cout << "Masukkan angka: ";
    cin >> x;

    if (x >= 1000)
    {
        if (x >= 3000)
            romawi += "MMM", x -= 3000;
        else if (x >= 2000)
            romawi += "MM", x -= 2000;
        else
            romawi += "M", x -= 1000;
    }

    if (x >= 900)
        romawi += "CM", x -= 900;
    else if (x >= 500)
        romawi += "D", x -= 500;
    else if (x >= 400)
        romawi += "CD", x -= 400;

    if (x >= 100)
    {
        if (x >= 300)
            romawi += "CCC", x -= 300;
        else if (x >= 200)
            romawi += "CC", x -= 200;
        else
            romawi += "C", x -= 100;
    }

    if (x >= 90)
        romawi += "XC", x -= 90;
    else if (x >= 50)
        romawi += "L", x -= 50;
    else if (x >= 40)
        romawi += "XL", x -= 40;

    if (x >= 10)
    {
        if (x >= 30)
            romawi += "XXX", x -= 30;
        else if (x >= 20)
            romawi += "XX", x -= 20;
        else
            romawi += "X", x -= 10;
    }

    if (x >= 9)
        romawi += "IX", x -= 9;
    else if (x >= 5)
        romawi += "V", x -= 5;
    else if (x >= 4)
        romawi += "IV", x -= 4;

    if (x >= 1)
    {
        if (x == 3)
            romawi += "III";
        else if (x == 2)
            romawi += "II";
        else
            romawi += "I";
    }

    cout << "Konversi romawi: " << romawi << endl;

    return 0;
}