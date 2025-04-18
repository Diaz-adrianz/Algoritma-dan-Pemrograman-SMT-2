// Piramid

#include <iostream>
using namespace std;

void piramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int k = i; k <= 2 * i - 1; k++)
            cout << k % 10;

        for (int l = 2 * i - 2; l >= i; l--)
            cout << l % 10;

        cout << endl;
    }
}

int main()
{
    piramid(6);
    return 0;
}