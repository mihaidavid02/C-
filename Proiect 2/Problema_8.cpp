#include <iostream>
using namespace std;
int main()
{

    int n, i, x, s = 0;
    cout << "Dati numarul de numere intergi ";
    cin >> n;
    cout << "Dati cele " << n << " numere intregi ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        s = s + x;
    }
    cout << (float)s / n;




    /*
    int n, i, x, s = 0;
    cout << "Dati numarul de numere intergi ";
    cin >> n;
    cout << "Dati cele " << n << " numere intregi ";
    i = 1;
    while (i <= n)
    {
        cin >> x;
        s = s + x;
        i++;
    }
    cout << (float)s / n;
    */

    /*
    int n, i, x, s = 0;
    cout << "Dati numarul de numere intergi ";
    cin >> n;
    cout << "Dati cele " << n << " numere intregi ";
    i = 0;
    do
    {
        cin >> x;
        s = s + x;
        i++;
    } while (i < n);
    cout << (float)s / n;
    */
    return 0;

}
