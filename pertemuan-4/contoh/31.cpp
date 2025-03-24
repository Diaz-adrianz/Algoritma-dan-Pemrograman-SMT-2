// Kalkulator sederhana

#include <iostream>
using namespace std;

int main()
{
    int op1, op2;
    char oprt;

    cout << "Masukkan angka pertama: ";
    cin >> op1;
    cout << "Masukkan angka kedua: ";
    cin >> op2;
    cout << "Masukkan operator ('+'. '-', '*', '/'): ";
    cin >> oprt;

    switch (oprt)
    {
    case '+':
        cout << op1 + op2 << endl;
        break;
    case '-':
        cout << op1 - op2 << endl;
        break;
    case '*':
        cout << op1 * op2 << endl;
        break;
    case '/':
        cout << op1 / op2 << endl;
        break;
    }

    return 0;
}