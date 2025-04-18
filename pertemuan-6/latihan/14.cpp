// Ketupat

#include <iostream>
using namespace std;

void ketupat(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j = 2 * i - 1;
        int k = j;
        if (k > n)
            k = n - (j - n);

        for (int l = 1; l <= (n - k) / 2; l++)
            cout << " ";

        for (int m = 1; m <= k; m++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    ketupat(9);
    return 0;
}