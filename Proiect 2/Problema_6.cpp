#include <iostream>
using namespace std;
int main()
{
    char c;
    int n, i;
    cout << "Dati un numar ";
    cin >> n;
    cout << "Apasati 's' pentru suma primelor " << n << " numere naturale\n";
    cout << "Apasati 'p' pentru produsul primelor " << n << " numere naturale\n";
    cout << "Apasati 'x' pentru a verifica paritatea numarului " << n << " \n";
    cin >> c;
    switch (c)
    {
    case 's':
    {
        int s = 0;
        for (i = 1; i <= n; i++)
            s += i;
        cout << "Suma prrimelor " << n << " numere este " << s;
    }
    break;
    case 'p':
    {
        int p = 1;
        for (i = 1; i <= n; i++)
            p *= i;
        cout << "Produsul primelor " << n << " numere este " << p;

    }
    break;
    case 'x':
    {
        if (n % 2 == 0)
            cout << "Numarul " << n << " este par";
                 else cout << "Numarul " << n << " este impar ";
    }
        break;

    default:
        cout << "aceasta nu e o comanda valida";

    }
    return 0;
}
