// kpk

#include <iostream>
using namespace std;

void cariKpk(int a, int b, int &kpk)
{
    int tempA = a, tempB = b;
    while (tempB != 0)
    {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }

    kpk = (a * b) / tempA;
}

int main()
{
    int a = 18, b = 24, kpk;

    cariKpk(a, b, kpk);
    cout << "a: " << a
         << "\nb: " << b
         << "\nKPK: " << kpk
         << endl;
    return 0;
}
