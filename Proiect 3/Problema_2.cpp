#include <iostream>
using namespace std;
int main()
{

    int v[20], dim, i, j, p;
    float x[20], c[40] = {};
    cout << "Dati dimensiunea celor 2 vectori\n";
    cin >> dim;
    cout << "Dati cele " << dim << " numere intregi ale primului vector\n";
    for (i = 0; i <= dim - 1; i++)
        cin >> v[i];
    cout << "Dati cele " << dim << " numere reale ale celui de-al doilea vector\n";
    for (i = 0; i <= dim - 1; i++)
        cin >> x[i];

    // interclasare
    i = j = p = 0;
    while (i < dim && j < dim)
        if (i < j)
            c[p++] = v[i++];
        else if (j < i)
            c[p++] = x[j++];
        else
            c[p++] = v[i++];

    while (i < dim) c[p++] = v[i++];
    while (j < dim) c[p++] = x[j++];


    cout << "Vectorul interclasat este ";
    for (i = 0; i < p; i++)
        cout << c[i] << " ";
    cout << endl;
    //sortare
    int ok;
    float aux;
    do
    {
        ok = 1;
        for (i = 0; i < p - 1; i++)
            if (c[i] > c[i + 1])
            {
                aux = c[i];
                c[i] = c[i + 1];
                c[i + 1] = aux;
                ok = 0;
            }
    } while (!ok);
    cout << "Vectorul interclasat sortat crescator este ";
    for (i = 0; i < p; i++)
        cout << c[i] << " ";
    cout << endl;

    //verificare daca numarul 23.0 exista in vector
    int st, dr, mij, poz;
    st = 0; dr = p - 1; ok = 0;
    while (st <= dr && !ok)
    {
        mij = (st + dr) / 2;
        if (c[mij] == 23.0)
        {
            ok = 1;
            poz = mij;
        }
        else if (c[mij] > 23.0) dr--;
          else st++;
    }
    //numaratoarea incepe de la 0
    if (ok != 0) cout << "Valoarea 23.0 exista si se afla pe pozitia " << poz << " in vectorul interclasat crescator";
    else cout << "Valoarea 23.0 nu exista";
    return 0;


}
