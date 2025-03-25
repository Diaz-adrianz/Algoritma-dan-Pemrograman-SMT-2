// Clipping nilai pixel

// DEKLARASI
// px: integer

// ALGORITMA
// read(px)
// if px > 255 then
//  px ← 255
// else
//  if px < 0 then
//      px ← 0
//  end if
// end if
// write (px)

// KODE
#include <iostream>
using namespace std;

int main()
{
    int px;

    cout << "Masukkan nilai hasil operasi: ";
    cin >> px;

    if (px > 255)
        px = 255;
    else if (px < 0)
        px = 0;

    cout << "Hasil clipping nilai: " << px << endl;

    return 0;
}