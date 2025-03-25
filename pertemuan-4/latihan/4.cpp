// Menentukan jenis segitiga

// DEKLARASI
// a, b, c: integer

// ALGORITMA
// read(a, b, c)
// if a^2 + b^2 = c^2 then
//  write('Segitiga siku-siku')
// else
//  if a^2 + b^2 > c^2 then
//      write('Segitiga lancip')
//  else
//      if a^2 + b^2 < c^2 then
//        write('Segitiga tumpul')
//      end if
//  end if
// end if

// KODE
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Masukkan sisi pertama: ";
    cin >> a;
    cout << "Masukkan sisi kedua: ";
    cin >> b;
    cout << "Masukkan sisi ketiga: ";
    cin >> c;

    if (a * a + b * b == c * c)
        cout << "\nSegitiga siku-siku" << endl;
    else if (a * a + b * b > c * c)
        cout << "\nSegitiga lancip" << endl;
    else if (a * a + b * b < c * c)
        cout << "\nSegitiga tumpul" << endl;

    return 0;
}