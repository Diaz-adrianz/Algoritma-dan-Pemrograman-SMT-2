// Hari kemarin

#include <iostream>
#include <string>
using namespace std;

void hariKemarin(string skrg, string &kmrn)
{
    if (skrg == "senin")
        kmrn = "minggu";
    else if (skrg == "selasa")
        kmrn = "senin";
    else if (skrg == "rabu")
        kmrn = "selasa";
    else if (skrg == "kamis")
        kmrn = "rabu";
    else if (skrg == "jumat")
        kmrn = "kamis";
    else if (skrg == "sabtu")
        kmrn = "jumat";
    else if (skrg == "minggu")
        kmrn = "sabtu";
}

int main()
{
    string skrg, kmrn;
    cout << "Hari ini: ";
    cin >> skrg;
    hariKemarin(skrg, kmrn);
    cout << "Maka, kemarin: " << kmrn << endl;
    return 0;
}