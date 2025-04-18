// Hari esok

#include <iostream>
#include <string>
using namespace std;

void hariEsok(string skrg, string &bsk)
{
    if (skrg == "senin")
        bsk = "selasa";
    else if (skrg == "selasa")
        bsk = "rabu";
    else if (skrg == "rabu")
        bsk = "kamis";
    else if (skrg == "kamis")
        bsk = "jumat";
    else if (skrg == "jumat")
        bsk = "sabtu";
    else if (skrg == "sabtu")
        bsk = "minggu";
    else if (skrg == "minggu")
        bsk = "senin";
}

int main()
{
    string skrg, bsk;
    cout << "Hari ini: ";
    cin >> skrg;
    hariEsok(skrg, bsk);
    cout << "Maka, besok: " << bsk << endl;
    return 0;
}