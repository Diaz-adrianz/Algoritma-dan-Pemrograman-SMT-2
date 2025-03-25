// Selisih hari

// DEKLARASI
// hari1, hari2 : string
// idxHari1, idxHari2, selisih : integer

// ALGORITMA
// read(hari1, hari2)
// switch(hari1)
//  case 'senin': idxHari1 ← 1
//  case 'selasa': idxHari1 ← 2
//  case 'rabu': idxHari1 ← 3
//  case 'kamis': idxHari1 ← 4
//  case 'jumat': idxHari1 ← 5
//  case 'sabtu': idxHari1 ← 6
//  case 'minggu': idxHari1 ← 7
// end switch
// switch(hari2)
//  case 'senin': idxHari2 ← 1
//  case 'selasa': idxHari2 ← 2
//  case 'rabu': idxHari2 ← 3
//  case 'kamis': idxHari2 ← 4
//  case 'jumat': idxHari2 ← 5
//  case 'sabtu': idxHari2 ← 6
//  case 'minggu': idxHari2 ← 7
// end switch
// if idxHari1 ≤ idxHari2 then
//    selisih ← (idxHari2 - idxHari1) + 1
// else
//    selisih ← (7 - (idxHari1 - idxHari2)) + 1
// end if
// write(selisih)

// KODE
#include <iostream>
#include <string>
using namespace std;

int indexHari(string hari)
{
    int idx = 0;

    if (hari == "senin")
        idx = 1;
    else if (hari == "selasa")
        idx = 2;
    else if (hari == "rabu")
        idx = 3;
    else if (hari == "kamis")
        idx = 4;
    else if (hari == "jumat")
        idx = 5;
    else if (hari == "sabtu")
        idx = 6;
    else if (hari == "minggu")
        idx = 7;

    return idx;
}

int main()
{
    string hari1, hari2;
    int idxHari1, idxHari2, selisih;

    cout << "Masukkan hari pertama: ";
    cin >> hari1;
    cout << "Masukkan hari kedua: ";
    cin >> hari2;

    idxHari1 = indexHari(hari1);
    idxHari2 = indexHari(hari2);

    if (idxHari1 <= idxHari2)
        selisih = idxHari2 - idxHari1 + 1;
    else
        selisih = 7 - (idxHari1 - idxHari2) + 1;

    cout << "Selisih hari: " << selisih << endl;

    return 0;
}