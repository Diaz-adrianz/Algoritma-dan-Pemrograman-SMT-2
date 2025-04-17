// jam hidup

#include <iostream>
#include "18.cpp"
using namespace std;

int main()
{
    Jam j;

    cout << "Masukkan jam (jam, menit, detik): ";
    cin >> j.hh >> j.mm >> j.ss;

    while (j.hh != 0 && j.mm != 0 && j.ss != 0)
    {
        cout << j.hh << ":" << j.mm << ":" << j.ss << endl;
        jamBerikutnya(j);
    }

    cout << j.hh << ":" << j.mm << ":" << j.ss << endl;

    return 0;
}