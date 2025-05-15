#include <iostream>
using namespace std;

int main()
{
    const int len = 10;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Output: ";
    for (int i = 0; i < len; i++)
        cout << arr[i] % 2 << ", ";

    return 0;
}