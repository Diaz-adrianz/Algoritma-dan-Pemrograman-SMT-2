// Konversi karakter digit ke nilai integer

// DEKLARASI
// c: char
// i: integer

// ALGORITMA
// read(c)
// case(c)
//  0: i = 0
//  1: i = 1
//  2: i = 2
//  3: i = 3
//  4: i = 4
//  5: i = 5
//  6: i = 6
//  7: i = 7
//  8: i = 8
//  9: i = 9
//  9: i = 9
//  otherwise i = -1
// end case
// write(i)

// KODE
#include <iostream>
using namespace std;

int main()
{
    char c;
    int i;

    cout << "Masukkan karakter angka: ";
    cin >> c;

    switch (c)
    {
    case '0':
        i = 0;
        break;
    case '1':
        i = 1;
        break;
    case '2':
        i = 2;
        break;
    case '3':
        i = 3;
        break;
    case '4':
        i = 4;
        break;
    case '5':
        i = 5;
        break;
    case '6':
        i = 6;
        break;
    case '7':
        i = 7;
        break;
    case '8':
        i = 8;
        break;
    case '9':
        i = 9;
        break;
    default:
        i = -1;
        break;
    }

    cout << i << endl;

    return 0;
}