// Menghapus karakter dalam string

#include <iostream>
#include <string>
using namespace std;

void hapusKarakter(string &s, char ch)
{
    string hasil;
    for (char c : s)
        if (c != ch)
            hasil += c;
    s = hasil;
}