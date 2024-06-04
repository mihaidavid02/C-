#include <iostream>
using namespace std;
int main()
{
    int n, x, i, suma, produs, nr_par, nr_impar;
    //cout << "Dati numarul de numere intregi ";
    //cin >> n;
    n = 10;
    cout << "Dati cele " << n << " numere intregi ";
    suma = 0; produs = 1; nr_par = 0; nr_impar = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        suma += x;
        produs *= x;
        if (x % 2 == 0)
            nr_par++;
        else nr_impar++;
    }
    cout << "Suma celor " << n << " numere intregi este " << suma << endl;
    cout << "Produsul celor " << n << " numere intregi este " << produs << endl;
    cout << "Sunt " << nr_par << " numere pare si " << nr_impar << " numere impare";
    return 0;

}
