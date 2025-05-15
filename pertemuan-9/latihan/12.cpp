// Salin string

#include <iostream>
#include <string>
using namespace std;

void salinSubstring(string s, int i, int n, string &out)
{
    if (i >= s.length())
        out = "";

    int sisa = s.length() - i;
    if (n > sisa)
        out = "";
    else
        out = s.substr(i, n);
}